#include<stdio.h>
int reverseno(int a);
int main()
{   
    int a;
    printf("Enter the number to be reversed\n");
    scanf("%d", &a);
    reverseno(a);
    printf("The reversed number is %d", reverseno(a));
    return 0;
}
int reverseno(int a)
{
    int sum = 0;
    while(a!=0)
    {
        sum = sum*10 + a%10;
        a/=10;
    }
        return sum;
    }
