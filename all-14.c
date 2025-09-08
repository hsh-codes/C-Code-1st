#include <stdio.h>
//Q15.Write a program to check of a year is leap year or not
int main() {
    int year;

    // Input the year from user
    printf("Enter a year:\n ");
    scanf("%d", &year);

    // Check leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}