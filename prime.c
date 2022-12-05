#include<stdio.h>  
int main(){    
int n,i,m=0,a=0;    
printf("Enter the number\n");    
scanf("%d",&n);    
m=n/2;    
for(i=2;i<=m;i++)    
{    
if(n%i==0)    
{    
printf("%d is not prime",n);    
a=1;    
break;    
}    
}    
if(a==0)    
printf("%d is prime",n);     
return 0;  
 }    