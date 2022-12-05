#include<stdio.h>
void printArray(int *A, int n){
    for(int i = 0;i<n;i++){
        printf("%d\t", A[i]);
    }
}
void SelectionSort(int *A, int n){
   int indOfMin,temp;
    for(int i = 0; i < n-1; i++){
        indOfMin = i;
        for(int j = i+1; j<n;j++){
            if(A[indOfMin]>A[j]){
                indOfMin = j;
            }
        }
            //Swap A[i] and A[indOfMin]
            temp = A[i];
            A[i] = A[indOfMin];
            A[indOfMin] = temp;
    }
   }
int main(){
    int n = 6;
    int A[] = {8,9,11,5,4,1};
    printf("The Array before Selection Sort\n");
    printArray(A,n);
    SelectionSort(A,n);
    printf("\nThe Array after Selection Sort\n");
    printArray(A,n);
    return 0;
}