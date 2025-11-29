#include <stdio.h>

int main() {
    int n, i, j, flag = 1;

    scanf("%d", &n);
    int mat[n][n];

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (mat[i][j] != mat[j][i])
                flag = 0;

    if (flag)
        printf("Symmetric\n");
    else
        printf("Not Symmetric\n");

    return 0;
}
