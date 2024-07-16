#include <stdio.h>
#include <string.h>

int main()
{
    char firstName[] = "Raj";
    char lastName[] = "Gupta";

    strcat(firstName, lastName);

    puts(firstName);

    return 0;
}