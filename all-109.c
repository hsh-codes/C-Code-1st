#include <stdio.h>

int main() {
    int n, i, count;
    int majority = -1;

    scanf("%d", &n);
    int nums[n];

    for (i = 0; i < n; i++)
        scanf("%d", &nums[i]);

    for (i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) {
            if (nums[j] == nums[i])
                count++;
        }
        if (count > n / 2) {
            majority = nums[i];
            break;
        }
    }

    printf("%d\n", majority);
    return 0;
}
