#define rows 100
#define cols 100
#include <stdio.h>

int main()
{
    int a[rows][cols], b[rows][cols], c[rows][cols];
    int row, col, m, n, p, q, k, i, j;
    printf("\n How many rows in A\n");
    scanf("%d", &m);
    printf("\n How many columns in A\n");
    scanf("%d", &n);
    p = n;
    printf("\n You will have %d rows in B\n", p);
    printf("How many columns in B\n");
    scanf("%d", &q);
    // Read Matrix A
    printf("\n Enter the elements of A:");
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("\n A[%d][%d]= ", row + 1, col + 1);
            scanf("%d", &a[row][col]);
        }
    }
    // displaying A
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%4d", a[row][col]);
        }
        printf("\n");
    }
    // Read Matrix B
    printf("\n Enter the elements of B:");
    for (row = 0; row < p; row++)
    {
        for (col = 0; col < q; col++)
        {
            printf("\n B[%d][%d]= ", row + 1, col + 1);
            scanf("%d", &b[row][col]);
        }
    }
    // displaying B
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%4d", b[row][col]);
        }
        printf("\n");
    }

    printf("C = Product of Matrices\n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < q; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < n; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < q; col++)
        {
            printf("%d\t", c[row][col]);
        }
        printf("\n");
    }
    return 0;
}