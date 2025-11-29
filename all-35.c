#include <stdio.h>

int main() {
    int num, i;
    int binary[32];

    scanf("%d", &num);

    if (num == 0) {
        printf("0\n");
        return 0;
    }

    i = 0;
    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    for (i = i - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    return 0;
}
