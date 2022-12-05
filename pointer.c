#include<stdio.h>
int main()
{
  /*  int a = 67;
    int *ptra;
    ptra = &a;
    int *ptr2 = NULL;
    printf("The address of a is %d\n", ptra);
    printf("The address of ptra is %d\n", &ptra);
     printf("The address of a is %d\n", &a);
     printf("The address of some garbage is %p", ptr2);*/
   /* char a = 34;
    char *ptra = &a;
      printf("The address of ptra is %d\n", ptra);
    ptra--;
   printf("The address of ptra is %d\n", ptra);
    printf("The address of ptra is %d\n", ptra+1);
    // ptr+1 means the size of the data type is added
    printf("The address of ptra is %d\n", ptra+2); */
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
   // int *arr;
    printf("The value at position 2 of the array is %d\n", arr[1]);
    printf("The address of 2 element of the array is %d\n", &arr[1]);
   // printf("%d\n", arr);
    return 0;
}