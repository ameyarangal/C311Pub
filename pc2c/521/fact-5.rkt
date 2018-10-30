#lang racket

(define init-k
  (λ ()
    `(init-k)))

(define fact-k
  (λ (n k)
    `(fact-k ,n ,k)))

(define apply-k
  (λ (k v)
    (match k
      [`(init-k) v]
      [`(fact-k ,n ,k)
       (let* ([apply-k-k k ]
              [apply-k-v (* n v)])
         (apply-k apply-k-k apply-k-v))])))

(define fact-cps
  (λ (n k)
    (cond
      [(zero? n)
       (let* ([apply-k-k k ]
              [apply-k-v 1])
         (apply-k apply-k-k apply-k-v))]
      [else (fact-cps (sub1 n) (fact-k n k))])))

(fact-cps 5 (init-k))
