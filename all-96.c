#include <stdio.h>

int main() {
    char str[1000];
    int freq[26] = {0}, i;

    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++) {
        int idx = str[i] - 'a';
        if (freq[idx] == 1) {
            printf("%c\n", str[i]);
            return 0;
        }
        freq[idx]++;
    }

    printf("No repeating character\n");
    return 0;
}
