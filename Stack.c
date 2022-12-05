#include<stdio.h>  //This is my prog of stack//
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
int IsEmpty(struct stack * ptr){
    if(ptr->top == -1)
    {   
        return 1;
    }
    else{
        return 0;
    }
}   
int IsFull(struct stack * ptr){
    if(ptr->top == ptr->size - 1)
    {   
        return 1;
    }
    else
    {
        return 0;
    }
}  
void push(struct stack * ptr, int val){
    if(IsFull(ptr)){
        printf("StackOverflow!!!\n Cannot push %d element to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        static int i = 1;
//    i+=1;
        printf("Element number %d = %d\n", i++,val);
}  
}
int pop(struct stack * ptr){
    if(IsEmpty(ptr)){
    printf("Stack Underflow!!!\n Cannot pop %d element from the stack\n", (ptr->arr[ptr->top]));
    return -1;
    }
    else{
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{   
    struct stack * sp = (struct stack *)malloc(sizeof(struct stack));
    sp->top = -1;
    sp->size = 10;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Stack has been successfully created\n");
   printf("Before pushing = %d\n", IsEmpty(sp));    
   // sp->top++;
    // sp->arr[0] = 2;
    
    push(sp,4);
    push(sp,40);
    push(sp,67);
    push(sp,84);
    push(sp,74);
    // push(sp,64);
    // push(sp,54);
    // push(sp,34);
    // push(sp,24);
    // push(sp,14);
    printf("After pushing all the elements = %d\n", IsFull(sp));
    printf("%d element popped out from the stack\n", pop(sp));
    printf("%d element popped out from the stack\n", pop(sp));
   
   push(sp,36);
   printf("%d element popped from the stack", pop(sp));
    return 0;
}