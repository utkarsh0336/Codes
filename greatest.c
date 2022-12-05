#include<stdio.h>
#include<conio.h>
int main()
{
    int N,X,Max=0,I=0;
    printf("\n Enter the value of N");
    scanf("%d",&N);
    label: I=I+1;
    if(I==(N+1))
    goto last;
    else
    repeat:printf("\n Enter the number");
           scanf("%d",&X);
    if(X>Max)
    {
    Max=X;
    goto label;
    }
    else
    goto label;
    last:printf("Greatest number is %d",Max);
    getch();
    return 0;
 }