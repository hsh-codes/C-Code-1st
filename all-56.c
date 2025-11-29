#include <stdio.h>

int main() {
    int i, j;
    int groups[] = {4, 5, 3, 1};
    int g, n;

    for (g = 0; g < 4; g++) {
        n = groups[g];
        for (i = 1; i <= n; i++)
            printf("*\n");
        printf("\n");
    }

    return 0;
}
