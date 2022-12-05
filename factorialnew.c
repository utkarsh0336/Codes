#include<stdio.h>
long int multiplynumbers(int n);
int main()
{
    int n;
    printf("Enter a positive number:\n");
    scanf("%d", &n);
    printf("Factorial of %d = %ld", n, multiplynumbers(n));
    return 0;
}
long int multiplynumbers(int x)
{
    if(x>=1)
    return x*multiplynumbers(x-1);
    else 
    return 1;

}