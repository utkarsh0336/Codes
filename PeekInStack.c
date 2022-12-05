#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
void IsEmpty(struct stack *ptr){
    if(ptr->top == -1)
    {
        printf("Stack Underflow!!!\n");
    }
    else{
        printf("The Stack is not empty\n");
    }
}
int IsFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1)
    {
        printf("Stack Overflow!!!\n");
        return 1;
    }
    else{
        printf("The stack is not full\n");
        return 0;
    }
}
int peek(struct stack * ptr, int i){
    if(ptr->top - i + 1 < 0)
    {
        printf("Not a valid output\n");
        return -1;
    }
    else{
        return ptr->arr[ptr->top - i + 1];
    }
    
}
int change(struct stack * ptr, int i,int elem){
    if(ptr->top - i + 1 < 0)
    {
        printf("Not a valid output\n");
        return -1;
    }
    else{
        ptr->arr[ptr->top - i + 1] = elem;
        return elem;
    }
    
}
int StackTop(struct stack *sp){
    return sp->arr[sp->top];
}
int StackBottom(struct stack *sp){
    return sp->arr[0];
}
int main()
{   int a,pos,elem;
    struct stack *sp = (struct stack*)malloc(sizeof(struct stack));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    sp->top++;
    sp->arr[sp->top] = 12; 
     sp->top++;
    sp->arr[sp->top] = 2;  
    sp->top++;
    sp->arr[sp->top] = 22; 
     sp->top++;
    sp->arr[sp->top] = 18;  
     sp->top++;
    sp->arr[sp->top] = 19;
     sp->top++;
    sp->arr[sp->top] = 62;  
     sp->top++;
    sp->arr[sp->top] = 52;  
     sp->top++;
    sp->arr[sp->top] = 23;  
     sp->top++;
    sp->arr[sp->top] = 32;  
     sp->top++;
    sp->arr[sp->top] = 36;  
    printf("The stack has been successfully created\n");
    int i = 0;
   while( i != 10){
    printf("Element %d = %d\n", i+1,sp->arr[i]);
    i++;
   }
        printf("Enter the element number you want to peek\n");
        scanf("%d", &a);
        printf("Peeked Element = %d\n", peek(sp, a));
        printf("Enter the postion of the element that you want to change\n");
        scanf("%d",&pos);
        printf("Enter the new element that you want to change\n");
        scanf("%d", &elem);
        printf("The new element is %d\n",change(sp,pos,elem));
        int j = 0;
    while( j != 10){
    printf("Element %d = %d\n", j+1,sp->arr[j]);
    j++;
   }
    // IsEmpty(sp);
    // IsFull(sp);
    // printf("The Top element is %d\n", StackTop(sp));
    // printf("The Bottom element is %d\n", StackBottom(sp));
    return 0;
}