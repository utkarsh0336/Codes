#include<stdio.h>
#include<conio.h>
void main()
{
    void change1(int);
    void change2(int*);
    int x=20,y=40;
    printf("\nValue of x before calling change1() is %d\n", x);
    change1(x);
    printf("Value of x after calling change1() is %d\n", x);
    printf("Value of y before calling change2() is %d\n", y);
    change2(&y);
     printf("Value of y after calling change2() is %d\n", y);
    getch();
    return;
}
void change1(int p)
{
    p*=5;
    printf("\n Value of p is %d within change1()\n", p);
    return;
}
void change2(int *z)
{
    *z+=100;
    printf("\n Value of y or z is %d within change2()\n", *z);
    return;
}
