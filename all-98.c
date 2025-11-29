#include <stdio.h>
#include <string.h>

int main() {
    char str[1000], word[100];
    int i = 0, len = 0, maxLen = 0;
    int start = 0, maxStart = 0;

    scanf("%[^\n]s", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            len++;
        } else {
            if (len > maxLen) {
                maxLen = len;
                maxStart = start;
            }
            len = 0;
            start = i + 1;
        }
        if (str[i] == '\0')
            break;
        i++;
    }

    for (i = maxStart; i < maxStart + maxLen; i++)
        printf("%c", str[i]);
    printf("\n");

    return 0;
}
