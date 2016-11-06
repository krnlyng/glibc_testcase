
#define _GNU_SOURCE
#include <stdio.h>
#include <dlfcn.h>

void testfunc(int id)
{
    void *h = dlmopen(id, "./test2.so", RTLD_LAZY);

    fprintf(stderr, "here\n");
    dlsym(h, "nosuchsymbol");
    fprintf(stderr, "there\n");
    dlsym(h, "nosuchsymbol");
    fprintf(stderr, "done\n");
}
