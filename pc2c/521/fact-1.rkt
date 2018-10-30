#lang racket

(define init-k
  (λ ()
    (λ (v) v)))

(define fact-cps
  (λ (n k)
    (cond
      [(zero? n) (k 1)]
      [else (fact-cps (sub1 n)
                      (λ (fact-sub1)
                        (k (* n fact-sub1))))])))

(fact-cps 5 (init-k))
