#lang racket

(define apply-k-k #f)
(define apply-k-v #f)

(define init-k
  (λ ()
    `(init-k)))

(define fact-k
  (λ (n k)
    `(fact-k ,n ,k)))

(define apply-k
  (λ ()
    (match apply-k-k
      [`(init-k) apply-k-v]
      [`(fact-k ,n ,k)
       (begin
         [set! apply-k-k k ]
         [set! apply-k-v (* n apply-k-v)]
         (apply-k))])))

(define fact-cps
  (λ (n k)
    (cond
      [(zero? n)
       (begin
         [set! apply-k-k k]
              [set! apply-k-v 1]
         (apply-k))]
      [else (fact-cps (sub1 n) (fact-k n k))])))

(fact-cps 5 (init-k))
