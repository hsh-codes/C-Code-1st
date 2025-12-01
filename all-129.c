#include <stdio.h>

int main() {
    FILE *fp;
    char line[1000];

    fp = fopen("info.txt", "a");
    if(fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    scanf(" %[^\n]", line);

    fprintf(fp, "%s\n", line);
    fclose(fp);

    printf("Text appended successfully.\n");
    return 0;
}
