#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;  // use long long to handle large results
    int found = 0;           // to check if there are any even numbers

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            product *= i;
            found = 1;  // mark that at least one even number was multiplied
        }
    }

    // Display result
    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers found in the given range.\n");

    return 0;
}
