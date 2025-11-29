#include <stdio.h>
#include <string.h>

int main() {
    char str1[1000], str2[1000];
    int len1, len2, i, flag;

    scanf("%s %s", str1, str2);
    len1 = strlen(str1);
    len2 = strlen(str2);

    if (len1 != len2) {
        printf("Not Rotation\n");
        return 0;
    }

    flag = 0;
    for (i = 0; i < len1; i++) {
        if (strncmp(str1, str2 + i, len1 - i) == 0 && strncmp(str1 + len1 - i, str2, i) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag)
        printf("Rotation\n");
    else
        printf("Not Rotation\n");

    return 0;
}
