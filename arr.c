#include<stdio.h>
int main()
{
    int n,arr[n];
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    printf("Enter the elements of the array\n");
    for(int i=0;i<n;i++)
    {
        printf("arr[%d] = ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<n;i++)
    printf("The elements of the array are %d\n", arr[i]);
    
    return 0;
}