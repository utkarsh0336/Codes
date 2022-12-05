#include <stdio.h>
int main()
{
    int m, n, q = 3, count = 0;
    int a = 0;
   printf("Enter the number of rows\n");
   scanf("%d", &m);
   printf("Enter the number of columns\n");
   scanf("%d", &n);
    int S[m][n];
    printf("Enter the elements\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &S[i][j]);
        }
    }

    printf("The Sparse Matrix is\n");
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d \t", S[i][j]);
            if (S[i][j] != 0)
            {
                count++;
            }
        }
        printf("\n");
    }

    printf("The Triplet Sparse Matrix is\n");

    int M[count][q];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (S[i][j] != 0)
            {
                M[a][0] = i+1;
                M[a][1] = j+1;
                M[a][2] = S[i][j];
                a++;
            }
        }
    }
    for (int i = 0; i < count; i++)
    {
        for (int j = 0; j < q; j++)
        {
            printf("%d \t", M[i][j]);
        }
        printf("\n");
    }
    return 0;
}
