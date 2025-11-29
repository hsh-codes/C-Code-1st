#include <stdio.h>

int main() {
    char str[1000];
    int i, j = 0;

    scanf("%[^\n]s", str);

    for (i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch != 'a' && ch != 'e' && ch != 'i' && ch != 'o' && ch != 'u' &&
            ch != 'A' && ch != 'E' && ch != 'I' && ch != 'O' && ch != 'U') {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    printf("%s\n", str);

    return 0;
}
