#include <stdio.h>

int main() {
    char str1[1000], str2[1000];
    int freq1[26] = {0}, freq2[26] = {0}, i;

    scanf("%s %s", str1, str2);

    for (i = 0; str1[i] != '\0'; i++)
        freq1[str1[i] - 'a']++;

    for (i = 0; str2[i] != '\0'; i++)
        freq2[str2[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (freq1[i] != freq2[i]) {
            printf("Not Anagram\n");
            return 0;
        }
    }

    printf("Anagram\n");
    return 0;
}
