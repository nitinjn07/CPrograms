#include <stdio.h>

int sum(int, int);

int main()
{
    int a, b, ans;
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b);

    ans = sum(a, b); // Formal Argument
    printf("Sum = %d", ans);

    return 0;
}

int sum(int a, int b) // Actual Argument
{
    int c;
    c = a + b;
    return c;
}