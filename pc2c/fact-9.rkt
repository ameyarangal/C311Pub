#lang racket

(define apply-k-k #f)
(define apply-k-v #f)
(define fact-k #f)
(define fact-n #f)

(define init-k
  (λ ()
    `(init-k)))

(define fact-cont
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
  (λ ()
    (cond
      [(zero? fact-n)
       (begin
         [set! apply-k-k fact-k]
         [set! apply-k-v 1]
         (apply-k))]
      [else
       (begin
         [set! fact-k (fact-cont fact-n fact-k)]
         [set! fact-n (sub1 fact-n)]
         (fact-cps))])))

(begin
  (set! fact-k (init-k))
  (set! fact-n 5)
  (fact-cps))
