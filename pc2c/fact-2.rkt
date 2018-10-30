#lang racket

(define init-k
  (λ ()
    (λ (v) v)))

(define fact-k
  (λ (n k)
    (λ (fact-sub1)
      (apply-k k (* n fact-sub1)))))

(define apply-k
  (λ (k v)
    (match k
      [else (k v)])))

(define fact-cps
  (λ (n k)
    (cond
      [(zero? n) (apply-k k 1)]
      [else (fact-cps (sub1 n) (fact-k n k))])))

(fact-cps 5 (init-k))
