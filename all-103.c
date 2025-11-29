#include <stdio.h>

int main() {
    int day, year;
    char slash[3];

    scanf("%d/%d/%d", &day, &slash[0], &year);

    printf("%02d-Apr-%d\n", day, year);

    return 0;
}
