#include<stdio.h>
int main()
{
    int T=-1;
    int S=0;
    int N;
    printf("Enter the last term");
    scanf("%d",&N);
    x:T=T+2;
    S=S+T;
    if(T==2*N-1)
    printf("The sum of %d terms of odd series is %d",N,S);
    else goto x;
    return 0;
}