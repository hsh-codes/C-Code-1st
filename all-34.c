#include <stdio.h>

int main() {
    int num, original, reversed = 0, digit;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num; // store original number for display

    // Reverse the number
    while (num != 0) {
        digit = num % 10;          // get last digit
        reversed = reversed * 10 + digit; // append digit
        num /= 10;                 // remove last digit
    }

    // Display result
    printf("Reverse of %d is %d\n", original, reversed);

    return 0;
}
