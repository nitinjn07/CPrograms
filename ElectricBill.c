#include <stdio.h>

int main()
{
    int unit, bill, diff;

    printf("Enter Unit");
    scanf("%d", &unit);
    if (unit > 0 && unit <= 50)
    {
        bill = unit * 6;
        printf("You bill is = %d", bill);
    }
    else if (unit > 50 && unit <= 100)
    {
        diff = unit - 50;
        bill = 300 + (diff * 8);
        printf("You bill is = %d", bill);
    }
    else if (unit > 100 && unit <= 200)
    {
        diff = unit - 100;
        bill = 300 + 400 + (diff * 10);
        printf("You bill is = %d", bill);
    }
    else if (unit > 200)
    {
        diff = unit - 200;
        bill = 300 + 400 + 1000 + (diff * 15);
        printf("You bill is = %d", bill);
    }
    else
    {
        printf("No bill Found");
    }

    return 0;
}