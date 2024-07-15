#include <stdio.h>

int main()
{
    float time = 9;
    int task = 1;
    int quiz = 0;

    if (time <= 9)
    {
        if (task == 1)
        {
            if (quiz == 1)
            {
                printf("Congratulation You are eligible for Training");
            }
            else
            {
                printf("Please prepare quiz");
            }
        }
        else
        {
            printf("Please make a notes first");
        }
    }
    else
    {
        printf("Go to Pandey Sir");
    }

    return 0;
}