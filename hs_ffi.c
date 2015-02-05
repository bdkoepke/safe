#include <HsFFI.h>
#ifdef __GLASGOW_HASKELL__
extern void __stginit_Safe(void);
#endif
#include "hs_ffi.h"

int invoke_hs(main_f f, int argc, char *argv[]) {
    hs_init(&argc, &argv);
#ifdef __GLASGOW_HASKELL__
    hs_add_root(__stginit_Safe);
#endif
    int r = f(argc, argv);
    hs_exit();
    return r;
}
