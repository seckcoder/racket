#;#;
#<<END
TR opt: n-ary-float.rkt 2:0 (+ 1.0 2.0 3.0) -- binary float
END
#<<END
6.0

END
#lang typed/scheme
#:optimize
#reader tests/typed-racket/optimizer/reset-port

(+ 1.0 2.0 3.0)
