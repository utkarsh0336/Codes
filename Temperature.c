#include<stdio.h>
void conversion()
{
    float F,T;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f",&T);
    F = (1.8 * T) + 32;
    printf("The temperature in Fahrenheit is %.2f degree Fahrenheit",F);
}

int main()
{
    conversion();
    
    return 0;
}