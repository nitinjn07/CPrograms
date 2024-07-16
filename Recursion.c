#include <stdio.h>
int fact(int);

int main()
{
    int no;

    printf("Enter any Number");
    scanf("%d", &no);
    printf("Factorial of %d is %d", no, fact(no));

    return 0;
}

int fact(int a)
{
    if (a >= 1)
    {
        return a * fact(a - 1);
    }
    else
    {
        return 1;
    }
}