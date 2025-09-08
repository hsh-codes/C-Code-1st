#include <stdio.h>

int main() 
{
    int year, i, days = 0;
    int dayOfWeek;
    printf("Enter a year: ");
    scanf("%d", &year);
    for (i = 1; i < year; i++) 
    {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366; 
        else
            days += 365;
    }
    dayOfWeek = days % 7;
    printf("On 1st January %d, it was ", year);
    switch (dayOfWeek) 
    {
        case 0: printf("Monday\n"); break;
        case 1: printf("Tuesday\n"); break;
        case 2: printf("Wednesday\n"); break;
        case 3: printf("Thursday\n"); break;
        case 4: printf("Friday\n"); break;
        case 5: printf("Saturday\n"); break;
        case 6: printf("Sunday\n"); break;
    }

    return 0;
}

Input- 2025
Output- On 1st January 2025, it was Wednesday
