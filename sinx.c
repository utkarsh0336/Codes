#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    int n, i, fact = 1, sign = -1;
    float x, sum;
    printf("Sine series calculator\n\n");
    printf("Enter the number of terms upto which you want calculations");
    scanf("%d", &n);
    printf("Angle in Degree:");
    scanf("%f", &x);
    x = (n * 3.14) / 180;
    sum = x;
    printf("Angle in Radian = %f", x);
    for (i = 3; i <= n; i = i + 2)
    {
        fact = fact * i * (i - 1);
        sum = sum + sign * pow(x, i) / fact;
        sign = sign * -1;
    }
    printf("\n\n Sin(%f) = %.4f", x, sum);
    printf("\n\n");
    getch();
    return 0;
}