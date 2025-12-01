#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int chars = 0, words = 0, lines = 0, inWord = 0;

    fp = fopen("info.txt", "r");
    if(fp == NULL) {
        printf("Error opening file!");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF) {
        chars++;
        if(ch == '\n') lines++;
        if(isspace(ch)) inWord = 0;
        else if(!inWord) {
            words++;
            inWord = 1;
        }
    }

    fclose(fp);

    printf("Characters: %d\n", chars);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
