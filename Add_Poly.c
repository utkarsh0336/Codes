#include <stdio.h>
int main()
{
    int size1, size2, max;
    printf("How many terms in the polynomial 1?\n");
    scanf("%d", &size1);
    printf("How many terms in the polynomial 2 ?\n");
    scanf("%d", &size2);
    if (size1 > size2)
    {
        max = size1;
    }
    max = size1;
    int arr1[max];
    int arr2[max];
    int addarr[max];
    int subarr[max];
    printf("Enter the coefficient of x^2 in polynomial 1\n");
    scanf("%d", &arr1[2]);
    printf("Enter the coefficient of xy in polynomial 1\n");
    scanf("%d", &arr1[0]);
    printf("Enter the coefficient of y in polynomial 1\n");
    scanf("%d", &arr1[1]);
    
    printf("Enter the coefficient of x^2 in polynomial 2\n");
    scanf("%d", &arr2[2]);
    printf("Enter the coefficient of y^2 in polynomial 2\n");
    scanf("%d", &arr2[3]);
    printf("Enter the coefficient of xy in polynomial 2\n");
    scanf("%d", &arr2[0]);
    printf("Enter the coefficient of x in polynomial 2\n");
    scanf("%d", &arr2[4]);
    printf("Enter the coefficient of y in polynomial 2\n");
    scanf("%d", &arr2[1]);

    printf("Addition of two polynomial is\n");
    for(int i = 0;i<max;i++){
        addarr[i] = arr1[i] + arr2[i];
    }


    return 0;
}
