#lang racket

(require "parenthec.rkt")

(define-registers apply-k-k apply-k-v fact-k fact-n)

(define-union continuation
  (init-k)
  (make-fact-k n k))

#;
(define init-k
  (λ ()
    `(init-k)))

#;
(define make-fact-k
  (λ (n k)
    `(fact-k ,n ,k)))

(define-label apply-k
  (union-case apply-k-k continuation
    [(init-k) apply-k-v]
    [(make-fact-k n k)
     (begin [set! apply-k-k k ]
            [set! apply-k-v (* n apply-k-v)]
            (apply-k))]))

(define-label fact-cps
  (cond
    [(zero? fact-n)
     (begin [set! apply-k-k fact-k]
            [set! apply-k-v 1]
            (apply-k))]
    [else (begin [set! fact-k (continuation_make-fact-k fact-n fact-k)]
                 [set! fact-n (sub1 fact-n)]
                 (fact-cps))]))

(begin (set! fact-k (continuation_init-k))
       (set! fact-n 5)
       (fact-cps))
