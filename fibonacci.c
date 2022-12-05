#include<stdio.h>
int main(){
    int a,b,c,n;
    a=0;
    b=1;
    c=a+b;
    printf("Enter the number you want to check if it is a fibonacci number or not");
    scanf("%d",&n);
    while (n>c)
    {
        a=b;
        b=c;
        c=a+b;
        
        /* code */
    }
    
    return 0;
}