#include<stdio.h>
void printArray(int A[], int n){
    for(int i = 0; i<n;i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
} 
int partition(int A[], int low, int high){
    int temp;
    int pivot = A[low];
    int i = low+1;
    int j = high;
    do{
    while(A[i]<=pivot){
        i++;
    }
    while(A[j]>pivot){
        j--;
    }
    if(i<j){
        temp = A[i];
        A[i] = A[j];
        A[j] = temp;
    }
    }while(i<j);
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;
     return j;
}
void quickSort(int A[], int low, int high){
    int partitionIndex;
        if(low<high){
            partitionIndex = partition(A,low,high);
            quickSort(A,low,partitionIndex-1);
            quickSort(A,partitionIndex+1,high);
        }
}
int main()
{
    int A[] = {3,12,9,25,7,11};
    printArray(A,6);
    quickSort(A,0,6);
    printArray(A,6);
    return 0;
}