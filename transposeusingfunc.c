#include <stdio.h>
#define rows 100
#define cols 100

void main()
{
    void display_mat(int arr[][cols], int m, int n);
    void transpose_mat(int arr[][cols], int a, int b);
    int arr[rows][cols];
    int m, n, row, col;
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
    display_mat(arr, m, n);
    transpose_mat(arr, m, n);
    return;
}
void display_mat(int arr[rows][cols],int m,int n)
    {   int row,col;
        printf("The entered matrix is \n");
        for(row=0;row<m;row++)
        {
            for(col=0;col<n;col++)
            {
                printf("%3d\t", arr[row][col]);
            }
            printf("\n");
        } 
    }
    void transpose_mat(int arr[][cols], int a, int b)
    {
        int row,col;
        printf("The Transposed matrix is \n");
        
         for(row=0;row<a;row++)
        {
            for(col=0;col<b;col++)
            {
               arr[row][col]=arr[col][row];
               printf("%3d", arr[row][col]);
            }
            printf("\n");
        } 

    }
