#include <stdio.h>

int main() {
    double num1, num2, result;
    char operator;

    // Input numbers and operator
    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /, %%): ");
    scanf(" %c", &operator);  // space before %c to ignore previous newline

    printf("Enter second number: ");
    scanf("%lf", &num2);

    // Perform calculation based on operator
    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("Result = %.2lf\n", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result = %.2lf\n", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result = %.2lf\n", result);
            break;

        case '/':
            if (num2 != 0)
                printf("Result = %.2lf\n", num1 / num2);
            else
                printf("Error! Division by zero is not allowed.\n");
            break;

        case '%':
            if ((int)num2 != 0)
                printf("Result = %d\n", (int)num1 % (int)num2);
            else
                printf("Error! Modulus by zero is not allowed.\n");
            break;

        default:
            printf("Invalid operator! Please use +, -, *, /, or %%.\n");
    }

    return 0;
}
