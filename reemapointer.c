/*#include<stdio.h>
int main()
{
    int arr[]={1,2,3,4,5};
    int *ptr,i;
    ptr = arr+4;
    for(i=4;i>=0;i--)
    printf("\n %d", *(ptr-i));
    return 0;
}   */
/*#include<stdio.h>
int main()
{
    int val=3;
    int*pval=&val;
    printf("%d %d", ++val, *pval);

    return 0;
}*/
/*#include<stdio.h>
int main()
{
    int num=5, *ptr=&num;
    printf("\n %d", *&num);
    printf("\n %d", *&*&num);
    printf("\n %d", *&ptr);
    printf("\n %d", **&ptr);
    printf("\n %d", &**&ptr);
    return 0;
}*/
/*#include <stdio.h>// Printing GoodMorning string using pointers//
int main()
{
    char str[] = "GoodMorning";
    char *pstr;
    pstr = str;
     printf("The String is : \n");
    while (*pstr!='\0')
    {
        printf("%c", *pstr);
        pstr++;
    }
    
    printf("%c", *pstr);
    return 0;
}*/