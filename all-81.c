#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    scanf("%d", &n);
    int mat[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        for (j = i + 1; j < n; j++)
            if (mat[i][i] == mat[j][j])
                flag = 0;

    if (flag)
        printf("Diagonal elements are distinct\n");
    else
        printf("Diagonal elements are not distinct\n");

    return 0;
}
