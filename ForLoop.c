#include <stdio.h>
int main()
{
    int i, input, ans;

    printf("Enter any number");
    scanf("%d", &input);

    for (i = 1; i <= 10; i++)
    {
        ans = i * input;

        printf("\n%d X %d = %d", input, i, ans);
    }

    return 0;
}