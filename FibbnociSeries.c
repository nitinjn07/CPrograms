#include <stdio.h>

int main()
{
    int a = 0, b = 1, c;
    // 0 1 1 2 3 5 8 13 21

    printf("%d,%d", a, b);
    for (int i = 1; i <= 20; i++)
    {
        c = a + b;
        printf("%d,", c);
        a = b;
        b = c;
    }

    return 0;
}