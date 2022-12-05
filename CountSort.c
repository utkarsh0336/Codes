#include <stdio.h>
#include <limits.h>
#include <stdlib.h>
void printArray(int *A, int n){
    for(int i = 0;i < n;i++){
        printf("%d", A[i]);
    
    printf("\t");
    }
}
int Maximum(int A[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}
void CountSort(int *A, int n)
{
    int i, j;
    // Find the maximum element in A
    int max = Maximum(A, n);
    // Create the count Array
    int *count = (int *)malloc((max + 1) * sizeof(int));
    // Initialise the array element to zero
    for (i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    // Increment the corresponding index in the count array.
    for (i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    i = 0; // Counter of count array
    j = 0; // Counter of given array

    while (i <= max)
    {
        if (count[i] > 0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {7, 3, 10, 36, 25, 18};
    int n = 6;
    printf("The Array before Count Sort\n");
    printArray(A, n);
    CountSort(A, n);
    printf("\nThe Array after Count Sort\n");
    printArray(A, n);
    return 0;
}