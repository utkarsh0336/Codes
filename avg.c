/*#include <stdio.h>
int main()
{
    int n, m = 1, a, sum = 0;
    float average;
    printf("How many numbers you want to take average of ?\n");
    scanf("%d", &n);
    while(m!=n+1)
    {
        printf("Enter the number %d\n", m);
        scanf("%d", &a);
        sum = sum + a;
        ++m;
    }
    average = (float) sum/n;

    printf("The average of %d numbers is %.2f\n", n, average);

    return 0;
}*/
/*#include <stdio.h>
#include <math.h>
int main()
{
    int n, sum = 0, m;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    for(m=1;m<=n;m++)
    {
    sum = sum + pow(m,3);
    }
    printf("The sum is %d", sum);

    return 0;
}*/
#include <stdio.h>
#include <math.h>
int main()
{
    int x, i = 1, sum = 0;
    int sign = 1;

    printf("Enter the value of x\n");
    scanf("%d", &x);
    do
    {
        sign = sign * -1;
        sum = sum + sign + pow(x, i = i + 2);
        i++;

    } while (sum = 1000);
    printf("Sum is %d", sum);

    return 0;
}