#include <stdio.h>
void swap(int *, int *);
int main()
{

    int a = 10, b = 20;
    printf("A = %d, B=%d", a, b);

    swap(&a, &b);

    printf("A = %d, B=%d", a, b);

    return 0;
}

void swap(int *p, int *q)
{
    int c;
    c = *p;
    *p = *q;
    *q = c;
}