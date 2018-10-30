void *applyr__m__kr__m__k, *applyr__m__kr__m__v, *factr__m__k, *factr__m__n;

void (*pc)();

struct continuation;
typedef struct continuation continuation;
struct continuation {
  enum {
    _initr__m__k_continuation,
    _maker__m__factr__m__k_continuation
  } tag;
  union {
    struct { void *_jumpr__m__out; } _initr__m__k;
    struct { void *_n; void *_k; } _maker__m__factr__m__k;
  } u;
};

void *continuationr_initr__m__k(void *jumpr__m__out);
void *continuationr_maker__m__factr__m__k(void *n, void *k);

void applyr__m__k();
void factr__m__cps();
int main();
int mount_tram();

struct _trstr;
typedef struct _trstr _trstr;
struct _trstr {
  jmp_buf *jmpbuf;
  int value;
};

