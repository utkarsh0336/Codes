#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=5;i++)
    {
        printf("\n");
        for(j=1;j<=i;j++)
        {
            k=k+1;
            printf("%d", k);
       

        }
    }
    return 0;
}