#include <stdio.h>
#include <conio.h>
int main()
{
    int m, n, p, q, row, col;
    int arr[10][10];
    printf("Enter the Row of matrix A\n");
    scanf("%d", &m);
    printf("Enter the columns of the matrix A\n");
    scanf("%d", &n);
    printf("Enter the elements of the matrix A\n");
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("\nA[%d][%d]= ", row + 1, col + 1);
            scanf("%d", &arr[row][col]);
        }
    }
    printf("The matrix A is :\n");
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%3d\t", arr[row][col]);
        }
        printf("\n");
    }
    arr[row][col] = arr[col][row];
    printf("The transposed matrix is:\n ");
    for (row = 0; row < m; row++)
    {
        for (col = 0; col < n; col++)
        {
            printf("%3d\t", arr[col][row]);
        }
        printf("\n");
    }

    return 0;
}
