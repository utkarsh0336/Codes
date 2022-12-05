#include <stdio.h>
#include <math.h>
#include <conio.h>
int main()
{
    typedef struct POINT
    {
        int x, y;
    } POINT;
    POINT p1, p2;
    float distance;
    printf("Enter the first coordinate\n");
    scanf("%d %d", &p1.x, &p1.y);
    printf("Enter the second coordinate\n");
    scanf("%d %d", &p2.x, &p2.y);
    distance = sqrt(pow((p1.x - p2.x), 2) + pow((p1.y - p2.y), 2));
    printf("The distance between the points is %.2f", distance);
    getch();
    return 0;
}
