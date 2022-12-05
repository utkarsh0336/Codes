
/*Print a multiplication table of a number entered by a user in pretty form 

Example:
Input
Enter the number you want multiplication table of:
6
Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
6 X 3 = 18
6 X 4 = 24
6 X 5 = 30
6 X 6 = 36
6 X 7 = 42
6 X 8 = 48
6 X 9 = 54
6 X 10 = 60

*/
#include<stdio.h>
int main()
{
    int a,b,c;
    for ( b = 1; b <= 10; b++);
    c = a * b;
    printf("Enter the number you want multiplication table of:\n");
    scanf("%d", &a);
    printf("Table of %d:\n");
    printf("%d * %d = %d", a,b,c);
    /* code */
    return 0;
}
