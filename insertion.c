#include<stdio.h>
void traversal(int arr[], int n){
    for(int i = 0;i<n;i++)
    {
        printf("%d\t", arr[i]);
    }
}
int indinsert(int arr[], int element, int n, int capacity, int index){
    if(n>=capacity)
    {   
        return -1;
    }
    else
    {
        for(int i = n; i>=index; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[index]=element;
        return 1;
    }
}
void inddeletion(int arr[], int n, int index){
    
        for(int i = index; i<n; i++)
        {
            arr[i]=arr[i+1];
        }
        
    }

/*int swap(int x, int y){
  int a, b,c;
  x = b;
  b = y;
  y = x;
  printf("%d", x);
  return 1;
}*/
int main()
{   int n;
    int arr[100] = {1, 2, 5, 34, 3, 88};
    printf("Array before deletion\n");
    traversal(arr, 6);
    printf("\n");
    printf("Array after deletion\n");
    //indinsert(arr, 45, 7, 100, 4);
    n-=1;
    inddeletion(arr,5,2);
    traversal(arr,5);

    
    
    return 0;
}