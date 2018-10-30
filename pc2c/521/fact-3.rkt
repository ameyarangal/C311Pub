#lang racket

(define init-k
  (λ ()
    `(init-k)))

(define fact-k
  (λ (n k)
    `(fact-k ,n ,k)
    #;
    (λ (v)
      )))

(define apply-k
  (λ (k v)
    (match k
      [`(init-k) v]
      [`(fact-k ,n ,k) (apply-k k (* n v))]
      [else (k v)])))

(define fact-cps
  (λ (n k)
    (cond
      [(zero? n) (apply-k k 1)]
      [else (fact-cps (sub1 n) (fact-k n k))])))

(fact-cps 5 (init-k))
