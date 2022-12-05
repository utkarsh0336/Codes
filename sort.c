#include <stdio.h>
int main()
{
    int row, col, m, n, p, q, i, j, k;
    int a[row][col], b[row][col], c[row][col];
    printf("How many rows in Matrix A\n");
    scanf("%d", &m);
    printf("How many columns in Matrix A\n");
    scanf("%d", &n);
    p = n;
    printf("You will have %d rows in Matrix B\n", p);
    printf("How many columns in Matrix B\n");
    scanf("%d", &q);
    printf("Enter the elements of Matrix A\n");
    for(row=0;row<m;row++)
    {
        for(col=0;col<n;col++)
        {
            printf("a[%d][%d] = ",row+1,col+1);
            scanf("%d",a[row][col]);
        }
        printf("\n");
    }
     printf("Enter the elements of Matrix A\n");
    for(row=0;row<p;row++)
    {
        for(col=0;col<q;col++)
        {
            printf("a[%d][%d] = ",row+1,col+1);
            scanf("%d",b[row][col]);
        }
        printf("\n");
    }
    printf("The entered matrix is :\n");
    for(row=0;row<p;row++)
    {
        for(col=0;col<q;col++)
        {
            printf("%d",a[row][col]);
        }
        printf("\n");
    }    
         for(row=0;row<p;row++)
    {
        for(col=0;col<q;col++)
        {
            printf("%d",b[row][col]);
        }
        printf("\n");
    }    
    return 0;
}