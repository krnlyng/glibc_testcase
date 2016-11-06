#define _GNU_SOURCE

#include <dlfcn.h>

int main(int argc, char *argv[])
{
    int id;
    void *h = dlmopen(-1, "./test.so", RTLD_LAZY);
    dlinfo(h, RTLD_DI_LMID, &id);
    void (*testfunc)(int) = dlsym(h, "testfunc");

    testfunc(id);

    return 0;
}

