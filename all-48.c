#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += (2 * i - 1) / (double)(2 * i);
    }

    printf("%.2lf\n", sum);

    return 0;
}
