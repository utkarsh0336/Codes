/*#include<stdio.h>
#include<stdlib.h>
struct Queue{
    int size;
    int f;
    int r;
    int * arr;
};
int IsFull(struct Queue * q){
    if(q->r == q->size - 1){
        return 1;
    }
    else
    return 0;
}
int IsEmpty(struct Queue * q){
    if(q->f == q->r){
        return 1;
    }
    else 
    return 0;
}
void enqueue(struct Queue * q, int val){
    if(IsFull(q)){
        printf("Queue Overflow!!\n");
    }
    else
    {
        q->r = q->r + 1;
        q->arr[q->r] = val;
      //  printf("Element = %d\n", q->arr[q->r]);
    }
}
int dequeue(struct Queue * q){
    int a = -1;
    if(IsEmpty(q)){
        printf("The Queue is Empty\n");
    }
    else{
        q->f = q->f + 1;
        a = q->arr[q->f];
    }
        return a;
    
}
    
int main(){
    struct Queue q;
    q.size = 20;
    q.f = q.r = -1;
    q.arr = (int*)malloc(q.size*sizeof(int));
    enqueue(&q,7);
    enqueue(&q,11);
    enqueue(&q,15);
    enqueue(&q,18);
    enqueue(&q,36);
    int i = q.f;
     while( i != q.r){
    printf("Element = %d\n",q.arr[i]);
    i++;
    }
    printf("After Dequeuing the Element %d\n", dequeue(&q));
    for(int i = q.f + 1; i <= q.r; i++){
    printf("Element = %d\n",q.arr[i]);
    }
    
return 0;
}  */
                          //SIR'S CODE
#include<stdio.h>
#include<stdlib.h>
 
struct queue
{
    int size;
    int f;
    int r;
    int* arr;
};
 
 
int isEmpty(struct queue *q){
    if(q->r==q->f){
        return 1;
    }
    return 0;
}
 
int isFull(struct queue *q){
    if(q->r==q->size-1){
        return 1;
    }
    return 0;
}
 
void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->r++;
        q->arr[q->r] = val;
        printf("Enqued element: %d\n", val);
    }
}
 
int dequeue(struct queue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->f++;
        a = q->arr[q->f]; 
    }
    return a;
}
 
int main(){
    struct queue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));
    
    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);
    enqueue(&q, 1); 
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q)); 
    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
 
    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    if(isFull(&q)){
        printf("Queue is full\n");
    }
 
    return 0;
}
