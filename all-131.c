#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inFile, *outFile;
    char ch;

    inFile = fopen("input.txt", "r");
    if(inFile == NULL) {
        printf("Error opening input file!\n");
        return 1;
    }

    outFile = fopen("output.txt", "w");
    if(outFile == NULL) {
        printf("Error opening output file!\n");
        fclose(inFile);
        return 1;
    }

    while((ch = fgetc(inFile)) != EOF) {
        fputc(toupper(ch), outFile);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Text converted to uppercase and saved to output.txt\n");
    return 0;
}
