#include<stdio.h>
 
int linearSearch(int arr[], int size, int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
}
 
int binarySearch(int arr[], int size, int element){
    int low, mid, high;
    low = 0;
    high = size-1;
    // Keep searching until low <= high
    while(low<=high){
        mid = (low + high)/2;
        if(arr[mid] == element){
            return mid;
        }
        if(arr[mid]<element){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    } 
    return -1;
    
}
 
int main(){
    // Unsorted array for linear search
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(int);
 
    // Sorted array for binary search
    int arr[] = {2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    int size = sizeof(arr)/sizeof(int);
    int element[4] = {3,18,1,25};
    for(int i = 0;i<4;i++){
    int searchIndex = binarySearch(arr, size, element[i]);
    printf("The element %d was found at index %d \n", element[i], searchIndex);
    }
    printf("\n");
    return 0;
}
