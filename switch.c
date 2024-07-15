#include <stdio.h>

int main()
{
    int month = 13;

    switch (month)
    {
    case 0:
        printf("Holiday on 26th Jan");
        break;
    case 1:
        printf("Vasant Panchmi 14th Feb");
        break;
    case 2:
        printf("Holi - Festival of Colours 6th March");
        break;
    case 3:
        printf("Guddi Padwa - 9 April");
        break;
    case 4:
        printf("8th - Birthday - Ravindra Nath Tagore");
        break;
    case 5:
        printf("21st Yoga Day");
        break;
    case 6:
        printf("Nagpanchmi");
        break;
    case 7:
        printf("Raksha Bandhan");
        break;
    case 8:
        printf("Viswakarma Pooja");
        break;
    case 9:
        printf("Dashera");
        break;
    case 10:
        printf("Diwali");
        break;
    case 11:
        printf("Chrismas");
        break;
    default:
        printf("Go to College");
        break;
    }

    return 0;
}
