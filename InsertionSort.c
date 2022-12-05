#include<stdio.h>
void printArray(int *A, int n){
    for(int i = 0;i < n;i++){
        printf("%d", A[i]);
    
    printf("\t");
    }
}
void InsertionSort(int *A, int n){
    int key,j;
    for(int i = 1;i <= n-1; i++){
        key = A[i];
        j = i-1;
        while(j >= 0 && A[j] > key){
                A[j+1] = A[j];
                j--;
        }
        A[j+1] = key;
    }
}
int main()
{    
    int A[] = {12, 54, 65, 7, 23, 9};
    printf("The Array before Insertion Sort\n");
    printArray(A,6);
    InsertionSort(A,6);
    printf("\nThe Array after Insertion Sort\n");
    printArray(A,6);
    return 0;
}