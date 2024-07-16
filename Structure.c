#include <stdio.h>

struct student
{
    int per;
    int age;
};

int main()
{
    struct student s1;

    printf("Enter Your Percentage");
    scanf("%d", &s1.per);

    printf("Enter Your Age");
    scanf("%d", &s1.age);

    printf("Age = %d", s1.age);
    printf("Percentage = %d", s1.per);

    return 0;
}