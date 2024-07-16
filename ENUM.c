#include <stdio.h>

enum Day
{
    SUNDAY = 0,
    MONDAY,
    TUESDAY
};

int main()
{
    enum Day today = 1;

    if (today == 1)
    {
        printf("OK");
    }
    else
    {
        printf("NO");
    }

    return 0;
}