#include<stdio.h>
#include<stdlib.h>
void enqueue();
int dequeue();

void printLQ(int *arr,int n){
    printf("Linear Queue is as follows\n");
    for(int i = 0;i<n;i++){
        printf("%d\t",arr[i]);
    }    
}

int main()
{   int size;
    printf("Enter the size of the LinearQueue\n");
    scanf("%d", &size);
    int *s = (int *)malloc(size * sizeof(int));
    int F = -1;
    int R = -1;
    int *LinearQueue[size];
    enqueue(LinearQueue[size],24,size,F,R);
    enqueue(LinearQueue[size],2,size,F,R);
    enqueue(LinearQueue[size],4,size,F,R);
    enqueue(LinearQueue[size],36,size,F,R);
    printf("LQ before dequeuing\n");
    printLQ(LinearQueue[size],size);
    printf("The dequeued element is %d",dequeue(LinearQueue[size],size,F,R));
    printf("The dequeued element is %d",dequeue(LinearQueue[size],size,F,R));
     printf("LQ after dequeuing\n");
    printLQ(LinearQueue[size],size);
    
    return 0;
}

void enqueue(int *arr,int x,int n,int F,int R){
   if(F == n-1){
    printf("Linear Queue is Full\n");
   }
    else{
       F=R=0;
       R++;
       arr[R] = x;
    }
}

int dequeue(int *arr,int n,int F,int R){
    int a = 0;
    if(F == R == -1){
        printf("Linear Queue is Empty\n");
    }
    else{
        a = arr[F];
        F++;
    }
    return a;
}