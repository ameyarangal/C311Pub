void *vr__t__, *er__t__, *kr__t__, *envr__t__, *yr__t__, *clsr__t__, *ar__t__;

void (*pcr__t__)();

struct expr;
typedef struct expr expr;
struct expr {
  enum {
    _const_expr,
    _var_expr,
    _if_expr,
    _mult_expr,
    _subr1_expr,
    _zero_expr,
    _letcc_expr,
    _callcc_expr,
    _throw_expr,
    _let_expr,
    _lambda_expr,
    _app_expr
  } tag;
  union {
    struct { void *_c; } _const;
    struct { void *_n; } _var;
    struct { void *_test; void *_conseq; void *_alt; } _if;
    struct { void *_nexpr1; void *_nexpr2; } _mult;
    struct { void *_nexp; } _subr1;
    struct { void *_nexp; } _zero;
    struct { void *_body; } _letcc;
    struct { void *_fun; } _callcc;
    struct { void *_kexp; void *_vexp; } _throw;
    struct { void *_exp; void *_body; } _let;
    struct { void *_body; } _lambda;
    struct { void *_rator; void *_rand; } _app;
  } u;
};

void *exprr_const(void *c);
void *exprr_var(void *n);
void *exprr_if(void *test, void *conseq, void *alt);
void *exprr_mult(void *nexpr1, void *nexpr2);
void *exprr_subr1(void *nexp);
void *exprr_zero(void *nexp);
void *exprr_letcc(void *body);
void *exprr_callcc(void *fun);
void *exprr_throw(void *kexp, void *vexp);
void *exprr_let(void *exp, void *body);
void *exprr_lambda(void *body);
void *exprr_app(void *rator, void *rand);

void valuer__m__ofr__m__cps();
struct clos;
typedef struct clos clos;
struct clos {
  enum {
    _c_clos
  } tag;
  union {
    struct { void *_body; void *_envr__m__cps; } _c;
  } u;
};

void *closr_c(void *body, void *envr__m__cps);

void applyr__m__closure();
struct envr;
typedef struct envr envr;
struct envr {
  enum {
    _empty_envr,
    _extended_envr
  } tag;
  union {
    struct { char dummy; } _empty;
    struct { void *_base; void *_val; } _extended;
  } u;
};

void *envrr_empty();
void *envrr_extended(void *base, void *val);

void applyr__m__env();
struct cont;
typedef struct cont cont;
struct cont {
  enum {
    _emptyr__m__k_cont,
    _multr__m__kr__m__r1_cont,
    _multr__m__kr__m__r2_cont,
    _subr1r__m__k_cont,
    _zeror__m__k_cont,
    _ifr__m__k_cont,
    _throwr__m__vr__m__k_cont,
    _throwr__m__kr__m__k_cont,
    _letr__m__k_cont,
    _callccr__m__k_cont,
    _appr__m__randr__m__k_cont,
    _appr__m__ratorr__m__k_cont
  } tag;
  union {
    struct { void *_dismount; } _emptyr__m__k;
    struct { void *_xr2; void *_env; void *_k; } _multr__m__kr__m__r1;
    struct { void *_k; void *_xr1; } _multr__m__kr__m__r2;
    struct { void *_k; } _subr1r__m__k;
    struct { void *_k; } _zeror__m__k;
    struct { void *_thn; void *_els; void *_env; void *_k; } _ifr__m__k;
    struct { void *_kr__m__val; } _throwr__m__vr__m__k;
    struct { void *_vr__m__exp; void *_env; } _throwr__m__kr__m__k;
    struct { void *_body; void *_env; void *_k; } _letr__m__k;
    struct { void *_k; } _callccr__m__k;
    struct { void *_rator; void *_k; } _appr__m__randr__m__k;
    struct { void *_rand; void *_env; void *_k; } _appr__m__ratorr__m__k;
  } u;
};

void *contr_emptyr__m__k(void *dismount);
void *contr_multr__m__kr__m__r1(void *xr2, void *env, void *k);
void *contr_multr__m__kr__m__r2(void *k, void *xr1);
void *contr_subr1r__m__k(void *k);
void *contr_zeror__m__k(void *k);
void *contr_ifr__m__k(void *thn, void *els, void *env, void *k);
void *contr_throwr__m__vr__m__k(void *kr__m__val);
void *contr_throwr__m__kr__m__k(void *vr__m__exp, void *env);
void *contr_letr__m__k(void *body, void *env, void *k);
void *contr_callccr__m__k(void *k);
void *contr_appr__m__randr__m__k(void *rator, void *k);
void *contr_appr__m__ratorr__m__k(void *rand, void *env, void *k);

void applyr__m__k();
int main();
int mount_tram();

struct _trstr;
typedef struct _trstr _trstr;
struct _trstr {
  jmp_buf *jmpbuf;
  int value;
};

