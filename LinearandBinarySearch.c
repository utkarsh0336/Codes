/*#include<stdio.h>                (Sir's CODE)
 
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
            low = mid+1;
        }
        else{
            high = mid -1;
        }
    } 
    return -1;
    
}
 
int main(){
    // Unsorted array for linear search
    // int arr[] = {1,3,5,56,4,3,23,5,4,54634,56,34};
    // int size = sizeof(arr)/sizeof(int);
 
    // Sorted array for binary search
    int arr[] = {1,3,5,56,64,73,123,225,444};
    int size = sizeof(arr)/sizeof(int);
    int element = 444;
    int searchIndex = binarySearch(arr, size, element);
    printf("The element %d was found at index %d \n", element, searchIndex);
    return 0;
}
*/

                                    /* MY CODE */
#include<stdio.h>
void Traversal(int arr[], int size){
    for(int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
}
void LinearSearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++)
    {
        if(arr[i] == element)
        {
            printf("The found element is %d at index %d", element,i);
        }
    }
}
    int BinarySearch(int arr[], int size, int element){
    int low = 0;
    int high = size - 1;
    int mid;
    while(low<=high)
    {   
        mid = (low+high)/2;
        if(arr[mid] == element)
        {
           return mid;
        }
        if(arr[mid] < element)
        {
            low = mid + 1;
        }
        if(arr[mid] > element)
        {
            high = mid - 1;
        }
    }
    return -1;   
}
int main()
{   
    int arr[] = {1,4,7,8,11,15,18,23,27,36,45,51,56,60};
    int size = sizeof(arr)/sizeof(int);
    int element = 36;
    printf("\n\n");
    printf("The array is :\n");
   Traversal(arr,size);
    //LinearSearch(arr,size,element);
   // BinarySearch(arr,size,element);
   printf("\n");
    printf("The element found is %d at index %d", element, BinarySearch(arr,size,element));
    return 0;
}