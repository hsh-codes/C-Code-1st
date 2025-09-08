#include <stdio.h>

int main() 
{
    int num;
    char choice = 'y';  
    int positive = 0, negative = 0, zero = 0;

    while (choice == 'y' || choice == 'Y') 
    {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice);
    }
    printf("\nTotal Positive Numbers: %d\n", positive);
    printf("Total Negative Numbers: %d\n", negative);
    printf("Total Zeros: %d\n", zero);

    return 0;
}

Input- 1 y -2 y 0 n

Output- Total Positive Numbers: 1
        Total Negative Numbers: 1
        Total Zeros: 1

