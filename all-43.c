#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int found = 0;

    scanf("%d", &num);

    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }

    if (found)
        printf("%lld\n", product);
    else
        printf("0\n");

    return 0;
}
