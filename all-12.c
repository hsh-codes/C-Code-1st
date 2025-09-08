#include <stdio.h>
//Q14.Wap to check three poibts (x1 , y1) , (x2 , y2) and (x3 , y3) are collinear or not
int main() {
    int x1, y1, x2, y2, x3, y3;
    int area;

    printf("Enter coordinates of point 1 (x1 , y1):\n ");
    scanf("%d %d", &x1, &y1);

    printf("Enter coordinates of point 2 (x2 , y2):\n ");
    scanf("%d %d", &x2, &y2);

    printf("Enter coordinates of point 3 (x3 , y3):\n ");
    scanf("%d %d", &x3, &y3);

    // Calculate twice the area of the triangle formed by three points (without 0.5 factor)
    area = x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);

    if (area == 0) {
        printf("The points are collinear.\n");
    } else {
        printf("The points are NOT collinear.\n");
    }

    return 0;
}