#include <stdio.h>

int main()
{
    FILE *f;

    f = fopen("hello.txt", "a");
    fprintf(f, "This is Important Text");

    fclose(f);

    return 0;
}