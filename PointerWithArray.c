#include <stdio.h>

int main()
{
    int a[4] = {1, 2, 3, 4};
    int *p;

    p = &a[0];

    printf("%d", (p + 3));

    return 0;
}