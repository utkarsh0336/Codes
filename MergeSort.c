#include<stdio.h>
void printArray(int A[], int n){
    for(int i = 0;i<n;i++){
        printf("%d\t", A[i]);
    }
    printf("\n");
}
void mergeSort(int A[], int B[], int C[], int m, int n){
    int i,j,k;
    i=j=k=0;
    while(i<m && j<n){
        if(A[i]<B[j]){
            C[k] = A[i];
            i++;
            k++;
        }
        else{
            C[k] = B[j];
            j++;
            k++;
        }
    while(i<=m){
        C[k] = B[j];
        j++;
        k++;
    }
    while(j<=n){
        C[k] = A[i];
        i++;
        k++;
    }
    }
}
int main()

{   
    int A[8] = {7,11,16,18,25,36,45,57};
    int B[9] = {2,6,8,13,17,24,29,33,37};
    int C[17];
    int m = 8;
    int n = 9;
    printf("The first Array is \n");
    printArray(A,m);
    printf("The second Array is \n");
    printArray(B,n);
    mergeSort(A,B,C,m,n);
    printArray(C,(m+n));
    
    return 0;
}