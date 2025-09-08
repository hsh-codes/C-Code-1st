#include <stdio.h>
//Q12.WAP TO check the validity of a triangler 
int main() {
    float s1, s2, s3;

    // Taking input from the user
    printf("Enter the three sides of the triangle:\n");
    scanf("%f %f %f", &s1, &s2, &s3);

    // Checking validity condition
    if((s1 + s2 > s3) &&
       (s2 + s3 > s1) &&
       (s1 + s3 > s2)) {
        printf("The given sides form a valid triangle.\n");
    } else {
        printf("The given sides do NOT form a valid triangle.\n");
    }

    return 0;
}
