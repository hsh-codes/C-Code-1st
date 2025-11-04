#include <stdio.h>

int main() {
    int num1, num2;
    char operator;

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // note the space before %c to ignore newline

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (operator) {
        case '+':
            printf("Result = %d\n", num1 + num2);
            break;
        case '-':
            printf("Result = %d\n", num1 - num2);
            break;
        case '*':
            printf("Result = %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("Result = %d\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;
        case '%':
            if (num2 != 0)
                printf("Result = %d\n", num1 % num2);
            else
                printf("Error! Modulus by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator.\n");
    }

    return 0;
}
