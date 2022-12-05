#define size 100
#include <stdio.h>
#include <conio.h>
void main()
{
    void sort(int A[], int);
    int A[100];
    int i, n;
    printf("How many elements in the array < 100;\n");
    scanf("%d", &n);
    printf("Enter the elements in the array A\n");
    for (i = 0; i < n; i++)
    {
        printf("\n A[%d] = ", i);
        scanf("%d", &A[i]);
    }
    printf("\n Before sorting:\n");
    for (i = 0; i < n; i++)
    {
        printf("%5d", A[i]);
        sort(A, n);
    }
    printf("\n List after sorting\n:");

    for (i = 0; i < n; i++)
    {
        printf("%5d", A[i]);
    }
    getch();
}

void sort(int A[], int x)
{
    int pass, loc, temp;
    for (pass = 0; pass < x; pass++)
    {
        for (loc = 0; loc < (x - pass); loc++)
        {
            if (A[loc] > A[loc + 1])
            {
                temp = A[loc];
                A[loc] = A[loc + 1];
                A[loc + 1] = temp;
            }
        }
    }
}