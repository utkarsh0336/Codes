#include <stdio.h>
void average()
{
    int a, b, c, avg;
    printf("Enter the first number:\n");
    scanf("%d", &a);
    printf("Enter the second number:\n");
    scanf("%d", &b);
    printf("Enter the third number:\n");
    scanf("%d", &c);
    avg=(a+b+c)/3;
    printf("The average of three numbers is %d", avg);
}
int main()
{   
    average();
    return 0;
}