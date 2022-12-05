#include<stdio.h>
int main()
{
    int exam;

    printf("You have passed in which examination?\n");
    printf("Enter 1 if you have passed in maths examination\n");
    printf("Enter 2 if you have passed in maths examination\n");
    printf("Enter 3 if you have passed in maths examination\n");
    scanf("%d",exam);
    if(exam == 1)
    {
        printf("You have won a gift of 15 Rupees!\n");
    }
    else if(exam == 2)
    {
        printf("You have won a gift of 15 Rupees!\n");
    }
    else if(exam == 3)
    
     {   printf("You have won a gift of 45 Rupees!\n");

    }
    else(exam>3);
    printf("You have not won any gift\n");
    return 0;
}
