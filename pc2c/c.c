#include <setjmp.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "c.h"

void *contr_emptyr__m__k(void *dismount) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _emptyr__m__k_cont;
  _data->u._emptyr__m__k._dismount = dismount;
  return (void *)_data;
}

void *contr_multr__m__kr__m__r1(void *xr2, void *env, void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _multr__m__kr__m__r1_cont;
  _data->u._multr__m__kr__m__r1._xr2 = xr2;
  _data->u._multr__m__kr__m__r1._env = env;
  _data->u._multr__m__kr__m__r1._k = k;
  return (void *)_data;
}

void *contr_multr__m__kr__m__r2(void *k, void *xr1) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _multr__m__kr__m__r2_cont;
  _data->u._multr__m__kr__m__r2._k = k;
  _data->u._multr__m__kr__m__r2._xr1 = xr1;
  return (void *)_data;
}

void *contr_subr1r__m__k(void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1r__m__k_cont;
  _data->u._subr1r__m__k._k = k;
  return (void *)_data;
}

void *contr_zeror__m__k(void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zeror__m__k_cont;
  _data->u._zeror__m__k._k = k;
  return (void *)_data;
}

void *contr_ifr__m__k(void *thn, void *els, void *env, void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _ifr__m__k_cont;
  _data->u._ifr__m__k._thn = thn;
  _data->u._ifr__m__k._els = els;
  _data->u._ifr__m__k._env = env;
  _data->u._ifr__m__k._k = k;
  return (void *)_data;
}

void *contr_throwr__m__vr__m__k(void *kr__m__val) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throwr__m__vr__m__k_cont;
  _data->u._throwr__m__vr__m__k._kr__m__val = kr__m__val;
  return (void *)_data;
}

void *contr_throwr__m__kr__m__k(void *vr__m__exp, void *env) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throwr__m__kr__m__k_cont;
  _data->u._throwr__m__kr__m__k._vr__m__exp = vr__m__exp;
  _data->u._throwr__m__kr__m__k._env = env;
  return (void *)_data;
}

void *contr_letr__m__k(void *body, void *env, void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letr__m__k_cont;
  _data->u._letr__m__k._body = body;
  _data->u._letr__m__k._env = env;
  _data->u._letr__m__k._k = k;
  return (void *)_data;
}

void *contr_callccr__m__k(void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _callccr__m__k_cont;
  _data->u._callccr__m__k._k = k;
  return (void *)_data;
}

void *contr_appr__m__randr__m__k(void *rator, void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _appr__m__randr__m__k_cont;
  _data->u._appr__m__randr__m__k._rator = rator;
  _data->u._appr__m__randr__m__k._k = k;
  return (void *)_data;
}

void *contr_appr__m__ratorr__m__k(void *rand, void *env, void *k) {
cont* _data = (cont*)malloc(sizeof(cont));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _appr__m__ratorr__m__k_cont;
  _data->u._appr__m__ratorr__m__k._rand = rand;
  _data->u._appr__m__ratorr__m__k._env = env;
  _data->u._appr__m__ratorr__m__k._k = k;
  return (void *)_data;
}

void *envrr_empty() {
envr* _data = (envr*)malloc(sizeof(envr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _empty_envr;
  return (void *)_data;
}

void *envrr_extended(void *base, void *val) {
envr* _data = (envr*)malloc(sizeof(envr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _extended_envr;
  _data->u._extended._base = base;
  _data->u._extended._val = val;
  return (void *)_data;
}

void *closr_c(void *body, void *envr__m__cps) {
clos* _data = (clos*)malloc(sizeof(clos));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _c_clos;
  _data->u._c._body = body;
  _data->u._c._envr__m__cps = envr__m__cps;
  return (void *)_data;
}

void *exprr_const(void *c) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _const_expr;
  _data->u._const._c = c;
  return (void *)_data;
}

void *exprr_var(void *n) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _var_expr;
  _data->u._var._n = n;
  return (void *)_data;
}

void *exprr_if(void *test, void *conseq, void *alt) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _if_expr;
  _data->u._if._test = test;
  _data->u._if._conseq = conseq;
  _data->u._if._alt = alt;
  return (void *)_data;
}

void *exprr_mult(void *nexpr1, void *nexpr2) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _mult_expr;
  _data->u._mult._nexpr1 = nexpr1;
  _data->u._mult._nexpr2 = nexpr2;
  return (void *)_data;
}

void *exprr_subr1(void *nexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _subr1_expr;
  _data->u._subr1._nexp = nexp;
  return (void *)_data;
}

void *exprr_zero(void *nexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _zero_expr;
  _data->u._zero._nexp = nexp;
  return (void *)_data;
}

void *exprr_letcc(void *body) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _letcc_expr;
  _data->u._letcc._body = body;
  return (void *)_data;
}

void *exprr_callcc(void *fun) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _callcc_expr;
  _data->u._callcc._fun = fun;
  return (void *)_data;
}

void *exprr_throw(void *kexp, void *vexp) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _throw_expr;
  _data->u._throw._kexp = kexp;
  _data->u._throw._vexp = vexp;
  return (void *)_data;
}

void *exprr_let(void *exp, void *body) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _let_expr;
  _data->u._let._exp = exp;
  _data->u._let._body = body;
  return (void *)_data;
}

void *exprr_lambda(void *body) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _lambda_expr;
  _data->u._lambda._body = body;
  return (void *)_data;
}

void *exprr_app(void *rator, void *rand) {
expr* _data = (expr*)malloc(sizeof(expr));
if(!_data) {
  fprintf(stderr, "Out of memory\n");
  exit(1);
}
  _data->tag = _app_expr;
  _data->u._app._rator = rator;
  _data->u._app._rand = rand;
  return (void *)_data;
}

int main()
{
er__t__ = (void *)exprr_callcc(exprr_lambda(exprr_mult(exprr_app(exprr_var((void *)0),exprr_const((void *)5)),exprr_const((void *)5))));
envr__t__ = (void *)envrr_empty();
pcr__t__ = &valuer__m__ofr__m__cps;
mount_tram();
printf("Fact 5: %d\n", (int)vr__t__);}

void applyr__m__k()
{
cont* _c = (cont*)kr__t__;
switch (_c->tag) {
case _emptyr__m__k_cont: {
void *dismount = _c->u._emptyr__m__k._dismount;
_trstr *trstr = (_trstr *)dismount;
longjmp(*trstr->jmpbuf, 1);
break; }
case _multr__m__kr__m__r1_cont: {
void *xr2 = _c->u._multr__m__kr__m__r1._xr2;
void *env = _c->u._multr__m__kr__m__r1._env;
void *k = _c->u._multr__m__kr__m__r1._k;
kr__t__ = (void *)contr_multr__m__kr__m__r2(k,vr__t__);
er__t__ = (void *)xr2;
envr__t__ = (void *)env;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _multr__m__kr__m__r2_cont: {
void *k = _c->u._multr__m__kr__m__r2._k;
void *xr1 = _c->u._multr__m__kr__m__r2._xr1;
kr__t__ = (void *)k;
vr__t__ = (void *)(void *)((int)xr1 * (int)vr__t__);
pcr__t__ = &applyr__m__k;
break; }
case _subr1r__m__k_cont: {
void *k = _c->u._subr1r__m__k._k;
kr__t__ = (void *)k;
vr__t__ = (void *)(void *)((int)vr__t__ - 1);
pcr__t__ = &applyr__m__k;
break; }
case _zeror__m__k_cont: {
void *k = _c->u._zeror__m__k._k;
kr__t__ = (void *)k;
vr__t__ = (void *)(vr__t__ == 0);
pcr__t__ = &applyr__m__k;
break; }
case _ifr__m__k_cont: {
void *thn = _c->u._ifr__m__k._thn;
void *els = _c->u._ifr__m__k._els;
void *env = _c->u._ifr__m__k._env;
void *k = _c->u._ifr__m__k._k;
if(vr__t__) {
  kr__t__ = (void *)k;
er__t__ = (void *)thn;
envr__t__ = (void *)env;
pcr__t__ = &valuer__m__ofr__m__cps;

} else {
  kr__t__ = (void *)k;
er__t__ = (void *)els;
envr__t__ = (void *)env;
pcr__t__ = &valuer__m__ofr__m__cps;

}
break; }
case _throwr__m__vr__m__k_cont: {
void *kr__m__val = _c->u._throwr__m__vr__m__k._kr__m__val;
kr__t__ = (void *)kr__m__val;
pcr__t__ = &applyr__m__k;
break; }
case _throwr__m__kr__m__k_cont: {
void *vr__m__exp = _c->u._throwr__m__kr__m__k._vr__m__exp;
void *env = _c->u._throwr__m__kr__m__k._env;
kr__t__ = (void *)contr_throwr__m__vr__m__k(vr__t__);
er__t__ = (void *)vr__m__exp;
envr__t__ = (void *)env;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _letr__m__k_cont: {
void *body = _c->u._letr__m__k._body;
void *env = _c->u._letr__m__k._env;
void *k = _c->u._letr__m__k._k;
kr__t__ = (void *)k;
er__t__ = (void *)body;
envr__t__ = (void *)envrr_extended(env,vr__t__);
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _callccr__m__k_cont: {
void *k = _c->u._callccr__m__k._k;
kr__t__ = (void *)k;
ar__t__ = (void *)k;
clsr__t__ = (void *)vr__t__;
pcr__t__ = &applyr__m__closure;
break; }
case _appr__m__randr__m__k_cont: {
void *rator = _c->u._appr__m__randr__m__k._rator;
void *k = _c->u._appr__m__randr__m__k._k;
kr__t__ = (void *)k;
ar__t__ = (void *)vr__t__;
clsr__t__ = (void *)rator;
pcr__t__ = &applyr__m__closure;
break; }
case _appr__m__ratorr__m__k_cont: {
void *rand = _c->u._appr__m__ratorr__m__k._rand;
void *env = _c->u._appr__m__ratorr__m__k._env;
void *k = _c->u._appr__m__ratorr__m__k._k;
kr__t__ = (void *)contr_appr__m__randr__m__k(vr__t__,k);
er__t__ = (void *)rand;
envr__t__ = (void *)env;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
}
}

void applyr__m__env()
{
envr* _c = (envr*)envr__t__;
switch (_c->tag) {
case _empty_envr: {
return((void *)0);
break; }
case _extended_envr: {
void *base = _c->u._extended._base;
void *val = _c->u._extended._val;
if((yr__t__ == 0)) {
  vr__t__ = (void *)val;
pcr__t__ = &applyr__m__k;

} else {
  yr__t__ = (void *)(void *)((int)yr__t__ - 1);
envr__t__ = (void *)base;
pcr__t__ = &applyr__m__env;

}
break; }
}
}

void applyr__m__closure()
{
clos* _c = (clos*)clsr__t__;
switch (_c->tag) {
case _c_clos: {
void *body = _c->u._c._body;
void *envr__m__cps = _c->u._c._envr__m__cps;
er__t__ = (void *)body;
envr__t__ = (void *)envrr_extended(envr__m__cps,ar__t__);
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
}
}

void valuer__m__ofr__m__cps()
{
expr* _c = (expr*)er__t__;
switch (_c->tag) {
case _const_expr: {
void *c = _c->u._const._c;
vr__t__ = (void *)c;
pcr__t__ = &applyr__m__k;
break; }
case _mult_expr: {
void *xr1 = _c->u._mult._nexpr1;
void *xr2 = _c->u._mult._nexpr2;
kr__t__ = (void *)contr_multr__m__kr__m__r1(xr2,envr__t__,kr__t__);
er__t__ = (void *)xr1;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _subr1_expr: {
void *x = _c->u._subr1._nexp;
kr__t__ = (void *)contr_subr1r__m__k(kr__t__);
er__t__ = (void *)x;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _zero_expr: {
void *x = _c->u._zero._nexp;
kr__t__ = (void *)contr_zeror__m__k(kr__t__);
er__t__ = (void *)x;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _if_expr: {
void *test = _c->u._if._test;
void *conseq = _c->u._if._conseq;
void *alt = _c->u._if._alt;
kr__t__ = (void *)contr_ifr__m__k(conseq,alt,envr__t__,kr__t__);
er__t__ = (void *)test;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _letcc_expr: {
void *body = _c->u._letcc._body;
er__t__ = (void *)body;
envr__t__ = (void *)envrr_extended(envr__t__,kr__t__);
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _callcc_expr: {
void *fun = _c->u._callcc._fun;
kr__t__ = (void *)contr_callccr__m__k(kr__t__);
er__t__ = (void *)fun;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _throw_expr: {
void *kr__m__exp = _c->u._throw._kexp;
void *vr__m__exp = _c->u._throw._vexp;
kr__t__ = (void *)contr_throwr__m__kr__m__k(vr__m__exp,envr__t__);
er__t__ = (void *)kr__m__exp;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _let_expr: {
void *e = _c->u._let._exp;
void *body = _c->u._let._body;
kr__t__ = (void *)contr_letr__m__k(body,envr__t__,kr__t__);
er__t__ = (void *)e;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
case _var_expr: {
void *n = _c->u._var._n;
yr__t__ = (void *)n;
pcr__t__ = &applyr__m__env;
break; }
case _lambda_expr: {
void *body = _c->u._lambda._body;
vr__t__ = (void *)closr_c(body,envr__t__);
pcr__t__ = &applyr__m__k;
break; }
case _app_expr: {
void *rator = _c->u._app._rator;
void *rand = _c->u._app._rand;
kr__t__ = (void *)contr_appr__m__ratorr__m__k(rand,envr__t__,kr__t__);
er__t__ = (void *)rator;
pcr__t__ = &valuer__m__ofr__m__cps;
break; }
}
}

int mount_tram ()
{
srand (time (NULL));
jmp_buf jb;
_trstr trstr;
void *dismount;
int _status = setjmp(jb);
trstr.jmpbuf = &jb;
dismount = &trstr;
if(!_status) {
kr__t__= (void *)contr_emptyr__m__k(dismount);
for(;;) {
pcr__t__();
}
}
return 0;
}
