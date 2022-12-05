#include<stdio.h>
int main()
{
    int num,i,c=0;
    printf("Enter the number\n");
    scanf("%d", &num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
         c++;
        }
    }
    
        if(c==2)
        printf("%d is the prime factor of %d\n", i,num);
        else
        printf("%d is the not prime factor of %d\n", i,num);
        
    return 0;
}