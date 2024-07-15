#include <stdio.h>

int sum(int, int);
float div(int, int);
int mul(int, int);
int subs(int, int);

int main()
{
    char input;
    int a, b;
    float ans;
    do
    {
        printf("Enter any Input ( +,-,*,/,e)");
        scanf("%c", &input);

        switch (input)
        {
        case '+':
            printf("Enter sum value a");
            scanf("%d", &a);
            printf("Enter value b");
            scanf("%d", &b);
            ans = sum(a, b);
            printf("Sum = %f", ans);
            break;
        case '-':
            printf("Enter sub value a");
            scanf("%d", &a);
            printf("Enter value b");
            scanf("%d", &b);
            ans = subs(a, b);
            printf("Substraction = %f", ans);
            break;
        case '/':
            printf("Enter value a");
            scanf("%d", &a);
            printf("Enter value b");
            scanf("%d", &b);
            ans = div(a, b);
            printf("Division = %f", ans);
            break;
        case '*':
            printf("Enter value a");
            scanf("%d", &a);
            printf("Enter value b");
            scanf("%d", &b);
            ans = mul(a, b);
            printf("Multiplication = %f", ans);
            break;
        default:
            printf("Invalid Input");
            break;
        }
    } while (input != 'e');

    return 0;
}

int sum(int a, int b) // Actual Argument
{
    int c;
    c = a + b;
    return c;
}
float div(int a, int b) // Actual Argument
{
    int c;
    c = a / b;
    return c;
}
int mul(int a, int b) // Actual Argument
{
    int c;
    c = a * b;
    return c;
}
int subs(int a, int b) // Actual Argument
{
    int c;
    c = a - b;
    return c;
}