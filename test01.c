#include <stdio.h>

struct tag
{
    int a;
    char b;
}__attribute__ ((packed));

int main(void)
{
    int i;
    struct tag test;
    printf("sizeof stuct is %d.", sizeof(struct tag));
    return 0;
}
