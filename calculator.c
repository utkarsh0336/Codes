#include <stdio.h>
int main()
{
    float a, b, c;
    char Operator;
    printf("Which type of operation you want to perform ??\n");
    scanf("%c", &Operator);
    printf("Enter the first number\n");
    scanf("%f", &a);
    printf("Enter the second number\n");
    scanf("%f", &b);
    switch (Operator)
    {
    case '+':
        c = a + b;
        printf("The addition is %.2f", c );
        break;
    case '-':
        c = a - b;
        printf("The substraction is %.2f", c );
        break;
    case '*':
        c = a * b;
        printf("The multiplication is %.2f",c );
        break;
    case '/':
        c = a / b;
        printf("The division is %.2f", c);
        break;
    default:
        printf("Operation not found\n");
        break;
    }
    return 0;
}