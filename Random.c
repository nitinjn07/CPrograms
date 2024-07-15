#include <time.h>
#include <stdio.h>
int main()
{
    int lucky;
    srand(time(NULL));
    int r = rand() % 10;

    do
    {
        printf("Enter Lucky Number");
        scanf("%d", &lucky);

    } while (r != lucky);

    return 0;
}