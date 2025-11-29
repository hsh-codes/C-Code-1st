#include <stdio.h>

int main() {
    int num, digit, maxDigit = 0, maxCount = 0, count[10] = {0};

    scanf("%d", &num);
    if (num < 0) num = -num;

    while (num != 0) {
        digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    for (int i = 0; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("%d\n", maxDigit);

    return 0;
}
