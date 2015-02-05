#ifdef __GLASGOW_HASKELL__
#include "Safe_stub.h"
#endif
#include <stdio.h>
#include "hs_ffi.h"

static int main_hs(int argc, char *argv[]) {
    int i = fibonacci_hs(42);
    printf("Fibonacci: %d\n", i);
    return 0;
}

int main(int argc, char *argv[])
{
    return invoke_hs(main_hs, argc, argv);
}
