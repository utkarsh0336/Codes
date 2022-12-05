#include<stdio.h>
int main()
{
    int r,*rptr;
    float area;
    rptr = &r;
    printf("Enter the radius\n");
    scanf("%d", rptr);
    area = 3.14 * (*rptr) * (*rptr);
    printf("The area of the circle is %f", area);
    return 0;
}