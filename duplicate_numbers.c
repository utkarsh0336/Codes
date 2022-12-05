#include<stdio.h>
int main()
{   int i,j;
    int arr[]={1,2,3,4,5,6,3,2,6,8,8,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    printf("The duplicate numbers in the array are\n");
    for(i=0;i<length;i++)
    {
        for(j=i+1;j<length;j++)
        {
            if(arr[i]==arr[j])
            printf("%d\n",arr[j]);
        }
    }
    return 0;
}