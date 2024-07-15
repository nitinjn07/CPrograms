#include <stdio.h>

void sum(int, int);

int main()
{
    int a, b;
    printf("Enter the value of a and b");
    scanf("%d%d", &a, &b);

    sum(a, b); // Formal Argument

    return 0;
}

void sum(int a, int b) // Actual Argument
{
    int c;
    c = a + b;
    printf("Sum = %d", c);
}