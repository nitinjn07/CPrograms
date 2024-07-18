#include <stdio.h>

int main()
{
    FILE *f;
    char fname[50];
    char message[100];
    char msg[100];

    printf("Enter file name with ext");
    scanf("%s", fname);

    f = fopen(fname, "w");

    printf("Enter your message");
    scanf("%s", message);

    fprintf(f, message);

    fgets(msg, 100, f);

    printf("%s", msg);

    fclose(f);

    return 0;
}