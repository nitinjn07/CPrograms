#include <stdio.h>

int main()
{
    int a[4] = {1, 2, 3, 4}, sum = 0, *p;

    p = &a[0];

    for (int i = 0; i < 4; i++)
    {
        sum = sum + *(p + i);
    }
    printf("sum = %d", sum);

    return 0;
}