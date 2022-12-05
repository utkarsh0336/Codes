#include<stdio.h>
int main()
{
    int T=0;
    int S=0;
    int N;
    printf("Enter the last term");
    scanf("%d",&N);
    x:T=T+1;
    S=S+T;
    if(T==N)
    printf("The sum of first %d natural numbers is %d",N,S);
    else goto x;
    return 0;

}