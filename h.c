#include "stdio.h"
#include "stdlib.h"

int
main(int argc, char **argv)
{
    printf("Options:\n"); 
    printf("  -h, --help\n");
    printf("  -v, --version\n");
    printf("  -s, --size\n");
    printf("  -t, --threads\n");
    printf("  -n, --no-sync\n");
    printf("  -a, --async\n");
    return 0;
}