#include <stdio.h>

int main() {
    int a, b, temp1, temp2, hcf;

    scanf("%d %d", &a, &b);

    temp1 = a;
    temp2 = b;

    while (temp2 != 0) {
        int rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }

    hcf = temp1;

    printf("%d\n", hcf);

    return 0;
}
