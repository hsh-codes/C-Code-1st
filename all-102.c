#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i, lastSpace = -1;

    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            lastSpace = i;
    }

    for (i = 0; i < lastSpace; i++) {
        if (i == 0 || (str[i-1] == ' ' && str[i] != ' '))
            printf("%c.", str[i]);
    }

    for (i = lastSpace + 1; str[i] != '\0'; i++)
        printf("%c", str[i]);

    printf("\n");
    return 0;
}
