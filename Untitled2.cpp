#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three different numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 == num2 || num1 == num3 || num2 == num3) {
        printf("Oops! Please make sure all three numbers are different.\n");
        return 1;
    }

    int largest = num1;

    if (num2 > largest) {
        largest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    }

    printf("The largest number is: %d\n", largest);

    
}

