#include <stdio.h>
int main()
{
    int hindi, eng, math, sci, sans;
    float avg;

    printf("Enter Subject Hindi Marks");
    scanf("%d", &hindi);
    printf("Enter Subject English Marks");
    scanf("%d", &eng);
    printf("Enter Subject Maths Marks");
    scanf("%d", &math);
    printf("Enter Subject Science Marks");
    scanf("%d", &sci);
    printf("Enter Subject Sanskrit Marks");
    scanf("%d", &sans);

    avg = (hindi + eng + math + sci + sans) / 5;

    printf("You Got %f %", avg);

    if (avg > 30 && avg <= 50)
    {
        printf("D Grade");
    }
    else if (avg > 50 && avg <= 60)
    {
        printf("C Grade");
    }
    else if (avg > 60 && avg <= 80)
    {
        printf("B Grade");
    }
    else if (avg > 80 && avg <= 100)
    {
        printf("A Grade");
    }
    else
    {
        printf("You are fail");
    }

    return 0;
}