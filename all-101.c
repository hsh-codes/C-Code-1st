#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int i;

    scanf("%[^\n]s", str);

    printf("%c", str[0]);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i+1] != '\0')
            printf("%c", str[i+1]);
    }

    printf("\n");
    return 0;
}
