#lang racket

#|
Instead of returning (λ (clos) ...),
make-clos-k returns a list that has a tag indicating this is the continuation for closure
and the free variables.
Renaming the clos in the body to v.
Add a new line to apply-k,
the new lhs is the list,
the new rhs is the body of the function.
|#

(define make-clos-k
  (λ (rand env k)
    `(clos-k ,rand ,env ,k)
    #;
    (λ (v)
      (valof-cps rand env
                 (make-arg-k v k)))
    #;
    (λ (clos)
      (valof-cps rand env
                 (make-arg-k clos k)))))

(define make-arg-k
  (λ (clos k)
    `(arg-k ,clos ,k)))

(define ext-env
  (λ (x a env)
    (λ (y)
      (if (eqv? y x)
          a
          (env y)))))

(define init-k
  (λ (dismount)
    `(init-k ,dismount)))

(define make-zero?-k
  (λ (k)
    `(zero?-k ,k)))

(define make-*-n₂-k
  (λ (n₁^ k)
    `(*-n₂-k ,n₁^ ,k)))

(define make-*-n₁-k
  (λ (n₂ env k)
    `(*-n₁-k ,n₂ ,env ,k)))

(define make-sub1-k
  (λ (k)
    `(sub1-k ,k)))

(define make-if-k
  (λ (then else env k)
    `(if-k ,then ,else ,env ,k)))

(define apply-k
  (λ (k v)
    (λ ()
      (match k
        [`(init-k ,dismount) (dismount v)]
        [`(clos-k ,rand ,env ,k)
         (valof-cps rand env
                 (make-arg-k v k))]
        [`(arg-k ,clos ,k) (clos v k)]
        [`(zero?-k ,k) (apply-k k (zero? v))]
        [`(*-n₂-k ,n₁^ ,k)
         (apply-k k (* n₁^ v))]
        [`(*-n₁-k ,n₂ ,env ,k)
         (valof-cps n₂ env
                    (make-*-n₂-k v k))]
        [`(sub1-k ,k)
         (apply-k k (sub1 v))]
        [`(if-k ,then ,else ,env ,k)
         (if v
             (valof-cps then env k)
             (valof-cps else env k))]
        [whatever (k v)]))))

(define valof-cps
  (λ (exp env k)
    (match exp
      [`,y
       #:when (symbol? y)
       (apply-k k (env y))]
      [`,n
       #:when (number? n)
       (apply-k k n)]
      [`,b
       #:when (boolean? b)
       (apply-k k b)]
      [`(if ,test ,then ,else)
       (valof-cps test env
                  (make-if-k then else env k))]
      [`(sub1 ,n)
       (valof-cps n env
                  (make-sub1-k k))]
      [`(zero? ,n)
       (valof-cps n env
                  (make-zero?-k k))]
      [`(* ,n₁ ,n₂)
       (valof-cps n₁ env
                  (make-*-n₁-k n₂ env k))]
      [`(λ (,x) ,body)
       (apply-k k
                (λ (a k)
                  (valof-cps body (ext-env x a env) k)))]
      [`(,rator ,rand)
       (valof-cps rator env
                  (make-clos-k rand env k))])))

(define fact
  '((λ (x) (x x))
    (λ (fact)
      (λ (n)
        (if (zero? n)
            1
            (* n ((fact fact) (sub1 n))))))))

(define tramp
  (λ (th)
    (tramp (th))))

(let/cc dismount
  (tramp
   (valof-cps `(,fact 5)
              (λ (y) (error 'unbound-id y))
              (init-k dismount))))
