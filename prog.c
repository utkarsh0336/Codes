#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter the first number\n");
    scanf("%d", &m);
    printf("Enter the second number\n");
    scanf("%d", &n);
    for(int i= m;i<=n;i++)
    {
    if(i % 6 == 0)
    printf("%d are the numbers which are divisible by 2 and 3\n", i);
    }
    return 0;
}