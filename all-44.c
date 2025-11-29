#include <stdio.h>

int main() {
    int num, binary[32], i = 0;

    scanf("%d", &num);

    if (num == 0) {
        printf("1\n");
        return 0;
    }

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", 1 - binary[i]);
    }
    printf("\n");

    return 0;
}
