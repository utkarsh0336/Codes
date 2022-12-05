#include<stdio.h>
int search(int, int*, int);
int i,l;
int main()
{
    int n,m;
    printf("Enter the size of the array\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements;\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d] = ", i+1);
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched\n");
    scanf("%d", &m);
    search(n,a,m);
    return 0;    
}
    int search(int n, int*a, int m)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]==m)
            l = 1;
            break;
        }
        if(l==1)
        printf("The number %d is present in the array", m);
        else
        printf("The number %d is not present in the array", m);
        return 0;
    }