#include <stdio.h>
#define N 4
int main()
{
    int i, j, k, l;
    for (i = 1; i <= N; i++)
    {
        for (k = N; k >= i; k--)
        {
            printf(" ");
        }
        for (j = 11; j<= i+10 ; j--)
        {
            printf("%d", j);
        }
        for (l = j - 1; l > 10; l--)
        {
            printf("%d", l);
        }
        printf("\n");
    }
    return 0;
}
