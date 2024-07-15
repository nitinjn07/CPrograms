#include <stdio.h>
int main()
{
    int password = 123, pass, attem = 0, rem;
    do
    {
        if (attem == 3)
        {
            break;
        }
        rem = 3 - attem;
        printf("Enter Password You Remaining Attemp = %d", rem) 33;
        scanf("%d", &pass);
        attem++;

    } while (password != pass);

    return 0;
}