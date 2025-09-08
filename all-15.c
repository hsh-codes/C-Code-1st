#include <stdio.h>
#include <math.h>
//15.Write a program to check BMI of a person and print the BMI values as per the following range. BMI index = W/ (Height) square
int main() {
    float weight , height, BMI;
    printf("Enter your weight in kg and height in metre \n");
    scanf("%f" , &weight);
    scanf("%f" , &height);
    BMI = weight/ pow(height, 2);
    printf("Your BMI is %f" , BMI);
    return 0;
}