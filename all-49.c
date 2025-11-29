#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator = 3;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        numerator = 2 * i;
        sum += numerator / (double)denominator;
        denominator += 4;
    }

    printf("%.2lf\n", sum);

    return 0;
}
