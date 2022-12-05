#include <stdio.h>
int sum()
{
    int a, b, sum;
    printf("Enter the first number\n");
    scanf("%d", &a);
    printf("Enter the second number\n");
    scanf("%d", &b);
    sum = a + b;
    printf("The sum is %d\n", sum);
    return 0;
}
int main()
{
    int a, b;
    printf("Hello World");
    sum(a, b);
    sum(a, b);
    sum(a, b);
    sum(a, b);
    return 0;
}