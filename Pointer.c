#include <stdio.h>

int main()
{
    int *p, a = 10, b = 20, c = 30;

    p = &c;

    printf("%d", *p);

    return 0;
}