#include <stdio.h>
int main()
{
    int n;
    ;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2 * n; j++)
        {
            if (j >= n - 1 - i && j <= n - 1 + i)
            {
                int k = 11,a;
                for(a = 1;a<4;a++)
                {
                k = k-a;


                printf("%d",k);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
/*#include <stdio.h>
int main()
{
    int i, j, n;
    printf("Enter the number of rows\n");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i + j >= (n-1))

                printf("*");

            else

                printf(" ");
        }

        printf("\n");
    }
    return 0;
}*/