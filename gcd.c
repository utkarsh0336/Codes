#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the first number\n");
    scanf("%d", &m);
    printf("Enter the second number\n");
    scanf("%d", &n);
    while (m!=n)
    {   if(m>n)
        m = m-n;
        else
        n = n-m;
    }
    printf("The GCD of the two numbers is %d",m);
    
    return 0;
}