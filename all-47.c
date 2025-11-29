#include <stdio.h>

int main() {
    int num, original, digit, i;
    long sum = 0, fact;

    scanf("%d", &num);
    original = num;

    while (num != 0) {
        digit = num % 10;
        fact = 1;
        for (i = 1; i <= digit; i++)
            fact *= i;
        sum += fact;
        num /= 10;
    }

    if (sum == original)
        printf("Strong\n");
    else
        printf("Not Strong\n");

    return 0;
}
