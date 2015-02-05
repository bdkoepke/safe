#ifndef HS_FFI
#define HS_FFI

typedef int (*main_f)(int argc, char *argv[]);
int invoke_hs(main_f f, int argc, char *argv[]);

#endif
