#include<stdio.h>
int main()
{
    int T=0;
    int S=0;
    int N;
    printf("Enter the last term");
    scanf("%d",&N);
    x:T=T+2;
    S=S+T;
    if(T==2*N)
    printf("The sum of %d terms of even series is %d",N,S);
    else goto x;
    return 0;
}