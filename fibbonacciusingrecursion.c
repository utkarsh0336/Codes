#include <stdio.h>
int fibbonacci(int num)
{
    if (num == 0)
        return 0;
    else if (num == 1)
        return 1;
    else
        return (fibbonacci(num - 1) + fibbonacci(num - 2));
}
int main()
{
    int num, result;
    printf("Enter the nth element of the fibbonacci series:\n");
    scanf("%d", &num);
    if (num < 0)
    {
        printf("Fibbonacci of negative number is not possible\n");
    }
    else
    {
        result = fibbonacci(num);
        printf("The %dth number is fibbonacci series is %d\n", num, result);
    }
    return 0;
}