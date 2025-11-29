#include <stdio.h>
#include <math.h>

int main() {
    int num, original, digit, n = 0;
    long sum = 0;

    scanf("%d", &num);
    original = num;
    int temp = num;

    while (temp != 0) {
        temp /= 10;
        n++;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        sum += pow(digit, n);
        temp /= 10;
    }

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
