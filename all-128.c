#include <stdio.h>

int main() {
    char source[100], dest[100];
    FILE *src, *dst;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    src = fopen(source, "r");
    if(src == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    dst = fopen(dest, "w");
    if(dst == NULL) {
        printf("Error opening destination file!\n");
        fclose(src);
        return 1;
    }

    while((ch = fgetc(src)) != EOF) {
        fputc(ch, dst);
    }

    fclose(src);
    fclose(dst);

    printf("File copied successfully.\n");
    return 0;
}
