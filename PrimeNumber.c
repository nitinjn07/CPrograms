#include <stdio.h>
int main()
{
    int input, i, p = 0;

    printf("Enter any number");
    scanf("%d", &input);

    for (i = 1; i <= input; i++)
    {
        if (input % i == 0)
        {
            p++;
        }
    }

    if (p == 2)
    {
        printf("It is prime number");
    }
    else
    {
        printf("It is Non Prime Number");
    }

    return 0;
}