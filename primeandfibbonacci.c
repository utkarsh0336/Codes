#include<stdio.h>
int main()
{
    int n,i,flag,a,b,c;
    flag=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    i=1;
    repeat:if(i<=n)
    {
        if(n%i==0)
        {
            flag=flag+1;
            i=i+1;
            goto repeat;
        }
        else
        {
            i=i+1;
            goto repeat;
        }
    }
    else
    {
        if(flag==2) 
            printf("%d is a prime number\n",n);
        else
            printf("%d is not a prime number\n",n);
    }
    a=0;
    b=1;
    c=0;
    loop:if(c<n)
    {
        c=a+b;
        a=b;
        b=c;
        goto loop;
    }
    else
    {
        if(c==n)
            printf("%d is a fibbonacci number\n",n);
        else
            printf("%d is not a fibbonacci number\n",n);
            }
    }
