#include <stdio.h>
int diagsum(int mat[][12],int r,int c)
{   
    int i, j, row, col, sum = 0;
    r = row;
    c = col;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            
            if (i == j)
            {
                diagsum(mat[i][j], r,c);
            }
        }
        printf("\n");
    }
    printf("sum of diagonal elements = %d", sum);
    return 0;
}
void main()
{
    int i, j, row, col, sum, mat[12][12], x, y;
    printf("How many rows and column of a Square Matrix A\n");
    scanf("%d %d", &row, &col);
    printf("Enter the elements of the matrix\n");
    for (x = 0; x < row; x++)
    {
        for (y = 0; y < col; y++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
    printf("The Matrix\n");
    diagsum(mat,row,col);
}
    /* int diagsum(int mat[12][12], int n);
     for (i = 0; i < row; i++)
     {
         for (j = 0; j < col; j++)
         {
             printf("%d \t", mat[i][j]);

             if (i == j)
             {
                 sum = sum + mat[i][j];
             }
         }
         printf("\n");*/

    printf("sum of diagonal elements = %d", diagsum(mat[i][j], r,c););
}