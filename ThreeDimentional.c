#include <stdio.h>
int main()
{

    int a[2][2][3], i, j, k;

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%d%d%d \n", i, j, k);
            }
        }
    }
    return 0;
}