#include <stdio.h>

int main()
{
    FILE *f;
    char para[100];

    f = fopen("demo.txt", "r");

    fgets(para, 100, f);

    printf("%s", para);

    return 0;
}