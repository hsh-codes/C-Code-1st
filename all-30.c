#include <stdio.h>

int main() {
    int n, i;

    // Input the value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("Numbers from 1 to %d are:\n", n);

    // Loop from 1 to n
    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }

    printf("\n"); // for clean output
    return 0;
}
