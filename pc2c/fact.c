#include <setjmp.h>
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include "fact.h"

void *continuationr_initr__m__k(void *jumpr__m__out) {
  continuation* _data = (continuation*)malloc(sizeof(continuation));
  if(!_data) {
    fprintf(stderr, "Out of memory\n");
    exit(1);
  }
  _data->tag = _initr__m__k_continuation;
  _data->u._initr__m__k._jumpr__m__out = jumpr__m__out;
  return (void *)_data;
}

void *continuationr_factr__m__k(void *n, void *k) {
  continuation* _data = (continuation*)malloc(sizeof(continuation));
  if(!_data) {
    fprintf(stderr, "Out of memory\n");
    exit(1);
  }
  _data->tag = _factr__m__k_continuation;
  _data->u._factr__m__k._n = n;
  _data->u._factr__m__k._k = k;
  return (void *)_data;
}

int main()
{
  factr__m__n = (void *)(void *)5;
  pc = &factr__m__cps;
  mount_tram();
  printf("%d\r\n", (int)applyr__m__kr__m__v);}

void factr__m__cps()
{
  if((factr__m__n == 0)) {
    applyr__m__kr__m__k = (void *)factr__m__k;
    applyr__m__kr__m__v = (void *)(void *)1;
    pc = &applyr__m__k;

  } else {
    factr__m__k = (void *)continuationr_factr__m__k(factr__m__n,factr__m__k);
    factr__m__n = (void *)(void *)((int)factr__m__n - 1);
    pc = &factr__m__cps;

  }
}

void applyr__m__k()
{
  continuation* _c = (continuation*)applyr__m__kr__m__k;
  switch (_c->tag) {
  case _initr__m__k_continuation: {
    void *jumpr__m__out = _c->u._initr__m__k._jumpr__m__out;
    _trstr *trstr = (_trstr *)jumpr__m__out;
    longjmp(*trstr->jmpbuf, 1);
    break; }
  case _factr__m__k_continuation: {
    void *n = _c->u._factr__m__k._n;
    void *k = _c->u._factr__m__k._k;
    applyr__m__kr__m__k = (void *)k;
    applyr__m__kr__m__v = (void *)(void *)((int)n * (int)applyr__m__kr__m__v);
    pc = &applyr__m__k;
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
    factr__m__k= (void *)continuationr_initr__m__k(dismount);
    for(;;) {
      pc();
    }
  }
  return 0;
}
