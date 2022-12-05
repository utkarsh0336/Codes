#include<stdio.h>
float grav()
{
    float m,F;
    printf("Enter the mass in kilogram of which the force of attraction is to be calculated\n");
    scanf("%f",&m);
    F = m * 9.8;
    printf("The force of attraction is %.2f Newton",F);
    return 0;
}
int main()
{
    grav();
    return 0;
}