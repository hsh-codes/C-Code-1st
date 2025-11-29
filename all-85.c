#include <stdio.h>

int main() {
    char str[1000];
    int count = 0, i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
        count++;

    printf("%d\n", count);

    return 0;
}
