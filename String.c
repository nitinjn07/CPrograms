#include <stdio.h>
#include <string.h>
int main()
{

    char a[] = "Welcome to VNS College";
    char s1[] = "";

    printf("\n Length of String is = %d", strlen(a));
    printf("\n Lower String = %s", strlwr(a));
    printf("\n Upper String  = %s", strupr(a));
    printf("\n Reverse String  = %s", strrev(a));
    strcpy(s1, a);
    printf("\n String  = %s", s1);
    return 0;
}