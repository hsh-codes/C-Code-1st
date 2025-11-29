#include <stdio.h>

int main() {
    int n, x, leftSum = 0, total = 0;

    scanf("%d", &n);

    total = n * (n + 1) / 2;

    for (x = 1; x <= n; x++) {
        leftSum += x;
        if (leftSum == total - leftSum + x) {
            printf("%d\n", x);
            return 0;
        }
    }

    printf("-1\n");
    return 0;
}
