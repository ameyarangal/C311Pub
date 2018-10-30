#lang racket

(define init-k
  (λ ()
    (λ (v) v)))

(define apply-k
  (λ (k v)
    (match k
      [else (k v)])))

(define fact-cps
  (λ (n k)
    (cond
      [(zero? n) (apply-k k 1)]
      [else (fact-cps (sub1 n)
                      (λ (fact-sub1)
                        (apply-k k (* n fact-sub1))))])))

(fact-cps 5 (init-k))
