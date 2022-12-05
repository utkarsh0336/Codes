#include <stdio.h>
#include <conio.h>
int main()
{
    typedef struct complex
    {
        int real, imaginary;
    } complex;
    complex c1, c2, sum_c, sub_c;
    int option;
    do
    {
        printf("\n******MAIN MENU******\n");
        printf("\n 1. Read the complex number\n");
        printf("\n 2. Display the complex number\n");
        printf("\n 3. Add the complex number\n");
        printf("\n 4. Substract the complex number\n");
        printf("\n 5. Exit\n");
        printf("Enter the option\n");
        scanf("%d", &option);
        switch(option)
        {
            case 1:
            printf("\n Enter the real and imaginary parts of the first complex number:");
            scanf("%d %d",&c1.real, &c1.imaginary);
            printf("\n Enter the real and imaginary parts of the second complex number:");
            scanf("%d %d",&c2.real, &c2.imaginary);
            break;
            case 2:
            printf("\n The first complex number is : %d + %di", c1.real, c1.imaginary);
            printf("\n The second complex number is : %d + %di", c2.real, c2.imaginary);
            break;
            case 3:
            sum_c.real = c1.real+c2.real;
            sum_c.imaginary = c1.imaginary + c2.imaginary;
            printf("\n The sum of two complex numbers is : %d + %di", sum_c.real, sum_c.imaginary);
            break;
            case 4:
            sub_c.real = c1.real - c2.real;
            sub_c.imaginary = c1.imaginary - c2.imaginary;
            printf("\n The difference between two numbers is : %d + %di", sub_c.real, sub_c.imaginary);
            break;
        }
    }
    while (option != 5);
    getch();
    return 0;
}