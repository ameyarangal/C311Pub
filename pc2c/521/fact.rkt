#lang racket

(require "parenthec.rkt")

(define-registers apply-k-k apply-k-v fact-k fact-n)
(define-program-counter pc)

(define-union continuation
  (init-k jump-out)
  (make-fact-k n k))

(define-label apply-k
  (union-case apply-k-k continuation
              [(init-k jump-out)
               (dismount-trampoline jump-out)]
              [(make-fact-k n k)
               (begin [set! apply-k-k k ]
                      [set! apply-k-v (* n apply-k-v)]
                      (set! pc apply-k))]))

(define-label fact-cps
  (cond
    [(zero? fact-n)
     (begin [set! apply-k-k fact-k]
            [set! apply-k-v 1]
            (set! pc apply-k))]
    [else (begin [set! fact-k (continuation_make-fact-k fact-n fact-k)]
                 [set! fact-n (sub1 fact-n)]
                 (set! pc fact-cps))]))

(define-label main
  (begin (set! fact-n 5)
         (set! pc fact-cps)
         (mount-trampoline continuation_init-k fact-k pc)
         (printf "~s\n" apply-k-v)))

