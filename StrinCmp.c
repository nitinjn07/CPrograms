#include <stdio.h>
#include <string.h>
int main()
{

    int i, j, k;
    char a[] = "Ram";
    char b[] = "Shyam";
    char c[] = "Rawan";

    i = strcmp(a, b);
    j = strcmp(a, c);
    k = strcmp(b, c);

    printf("%d , %d , %d ", i, j, k);

    return 0;
}