#include <stdio.h>

int main()
{

    int a = 10, b = 20, c;
    printf("A = %d, B=%d", a, b);
    c = a;
    a = b;
    b = c;

    printf("A = %d, B=%d", a, b);

    return 0;
}