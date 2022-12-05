#include<stdio.h>
#include<string.h>
int main()
{
    //int arr[9],n,i,x;
    //printf("Enter the number of elements you want to insert but not more than 10\n");
    //scanf("%d", &n);
   // for(i=0;i<n;i++)
   //     {
   //     printf("Enter the element\n");
   //     scanf("%d", &arr[i]);
   //     printf("The element is %d\n", arr[i]);
   //     
   // }
   char s1[] = "Hello";
    char s2[] = "World";
   printf("The size of string is %d\n",strlen(s1));
   printf("The merged string is %s\n", strcat(s1,s2));
   printf("The comparision between strings is %s\n",strcmp(s1,s2));


    return 0;
}