#include<stdio.h>
int checkpowoftwo(int n);
int main()
{   
    int num;
    printf("Enter the number you want to test:\n");
    scanf("%d", &num);
    if(checkpowoftwo(num)==1)
    printf("%d is a power of 2\n", num);
    else
    printf("%d is not a power of 2\n", num);
    return 0;
}
int checkpowoftwo (int x)
{
    if(x==0)
    return 0;
    while(x!=1)
    {
        if(x%2!=0)
        return 0;
        x/=2;
    }
    return 1;
}