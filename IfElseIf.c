#include <stdio.h>
int main()
{
    int p = 2000, dis, pay;

    if (p >= 100 && p <= 500)
    {
        dis = (p * 10) / 100;
        pay = p - dis;
        printf("Your bill is = %d", pay);
    }
    else if (p >= 500 && p <= 1000)
    {
        dis = (p * 20) / 100;
        pay = p - dis;
        printf("Your bill is = %d", pay);
    }
    else if (p >= 1000)
    {
        dis = (p * 50) / 100;
        pay = p - dis;
        printf("Your bill is = %d", pay);
    }
    else
    {
        printf("Please wait for your salary");
    }

    return 0;
}