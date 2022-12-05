#include<stdio.h>
#include<stdlib.h>

struct Circularqueue{
    int size;
    int f;
    int r;
    int *arr;
};

int isFull(struct Circularqueue *q){
    if((q->r+1) % q->size == q->f){
        return 1;
    }
        return 0;
}

int isEmpty(struct Circularqueue *q){
    if(q->r == q->f){
        return 1;
    }
    return 0;
}

void Circularenqueue(struct Circularqueue *q, int val){
    if(isFull(q)){
        printf("The Circular queue is Full\n");
    }
    else{
        q->r = (q->r+1) % q->size;
        q->arr[q->r] = val;
        printf("Enqued element %d\n", val);
    }
}
                                        
int Circulardequeue(struct Circularqueue *q){
    int a = -1;
    if(isEmpty(q)){
        printf("The Circular queue is Empty\n");
    }
    else{
        q->f = (q->f+1) % q->size;
        a = q->arr[q->f];
    }
    return a;
}

int main()
{
    struct Circularqueue *q;
    q->size = 4;
    q->f = q->r = 0;   
    q->arr = (int *)malloc(q->size*sizeof(int));

    //enqueue elements
    Circularenqueue(q, 12);
    Circularenqueue(q, 15);
    Circularenqueue(q, 1);
    // dequeue elements
    printf("Dequeuing element %d\n", Circulardequeue(q));
    printf("Dequeuing element %d\n", Circulardequeue(q));
    printf("Dequeuing element %d\n", Circulardequeue(q));
    Circularenqueue(q, 34);
    Circularenqueue(q, 34);
    Circularenqueue(q, 34);
    if(isFull(q)){
        printf("The circular queue is Full\n");   
    }
    
    return 0;
}