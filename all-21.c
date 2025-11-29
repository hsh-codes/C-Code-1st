#include <stdio.h>

int main()
{
    int arr[100], n, i, num, count = 0;

    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    if (n <= 0 || n > 100)
    {
        printf("Please enter a valid number of elements (1 to 100).\n");
        return 0;
    }

    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find its frequency: ");
    scanf("%d", &num);

    for (i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }

    printf("The frequency of %d is: %d\n", num, count);

    return 0;
}
