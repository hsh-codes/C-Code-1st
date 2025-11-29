#include <stdio.h>

int main() {
    int n, i, key, left, right, mid, found = 0;

    scanf("%d", &n);
    int arr[n];

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &key);

    left = 0;
    right = n - 1;

    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == key) {
            found = 1;
            break;
        } else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }

    if (found)
        printf("Element found at index %d\n", mid);
    else
        printf("Element not found\n");

    return 0;
}
