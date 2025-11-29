#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, result;

    scanf("%d", &num);

    last = num % 10;
    digits = (int)log10(num);
    first = num / pow(10, digits);

    result = last * pow(10, digits) + (num % (int)pow(10, digits) - last) + first;

    printf("%d\n", result);

    return 0;
}
