#include <stdio.h>
int main()
{
    int no;
    printf("Enter any number");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("It is Even Number");
    }
    else
    {
        printf("It is Odd Number");
    }

    return 0;
}