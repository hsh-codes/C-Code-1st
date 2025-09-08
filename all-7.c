#include<stdio.h>
int main() 
{
    int a,b,c,product;
    printf("enter the value of a \n,b \n,c \n");
    scanf("%d%d%d",&a,&b,&c);
    product=a*b*c;
    printf("product of %d,%d and %d is %d",a,b,c,product);
    return 0;
}

Input- a=10 b=20 c=30

Output- enter the value of a 
        ,b 
        ,c 
        product of 10,20 and 30 is 6000