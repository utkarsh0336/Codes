#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,i,j,a1,b1,x;
    printf("Enter the year:\n");
    scanf("%d",&n);
    if(n%4==0 && n%100!=0 || n%400==0)
    printf("%d is a leap year\n",n);
    else
    {
    printf("%d is not a leap year\n",n);
     for(i=1;i<=3;i++)
    {
            if(n%4==i)
         {  
             a=n-i;
            b=n+(4-i);
            printf("The range is %d to %d\n",a,b);
            goto x;
         }
    }
             for(j=1;j<=6;j++)
             {
                
                    if(4*j*100!=n)
                   { a1=n-4;
                     b1=n+4;
                     printf("The range is %d to %d\n",a1,b1);
                   }    

                     break;

                 }
    }
             
   x: return 0;
    
}
