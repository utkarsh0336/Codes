#include <stdio.h>
int main()
{
    int n, k, i, a;

    printf("Enter the year\n");
    scanf("%d", &a);
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        printf("%d is a leap year\n", a);
    }
    else
    {
        printf("%d is not a leap year\n", a);
    }
    printf("Enter the lower limit of Year\n");
    scanf("%d", &n);
    printf("Enter the upper limit of Year\n");
    scanf("%d", &k);

    for (i = n; i <= k; i++)
    {
        if (i % 4 == 0)
        {
            if (i % 100 != 0)
            {
                printf("%d is a leap year\n", i);
            }
            if (i % 400 == 0)
            {
                printf("%d is a leap year\n", i);
            }
        }
    }
    return 0;
}