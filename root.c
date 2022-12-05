#include<stdio.h>
#include<conio.h>
#include<math.h>
int main (void)
{
    int a,b,c,d;
    float x1,x2;
    printf("\nEnter the value of a");
    scanf("%d",&a);
     printf("\nEnter the value of b");
     scanf("%d",&b);
     printf("\nEnter the value of c");
     scanf("%d",&c);
    d=b*b-4*a*c;
    if(d>0)
    {
    x1= (-b+sqrt(d)) / (2*a);
    x2= (-b-sqrt(d)) / (2*a);
    printf("The roots of the quadratic equation are %f and %f",&x1,&x2);
    }
    else if (d==0)
    {
        x1= -b/(2.0*a);
        x1=x2;
        printf("The roots of the quadratic equation are equal and %f and %f",&x1,&x2);
    }
        else
    {
        printf("The roots are imaginary");
        getch();
    }
    return 0;

    
        /* code */
    }
    


