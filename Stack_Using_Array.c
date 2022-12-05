#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    int *arr;
};
 int IsEmpty(struct stack *ptr){
    if(ptr->top == -1)
    {
        return 1;
    }
    else{
    return 0;
    }
 }

 int IsFull(struct stack *ptr){
    if(ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else{
        return 0;
    }
  }
int main()
{   
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *)malloc(s.size * sizeof(int));

    struct stack *s;
     s->size = 80;
     s->top = -1;
     s->arr = (int *)malloc(s->size * sizeof(int));

    //Pushing an element manually
    s->arr[0] = 7;
    s->top++;
    s->arr[s->top] = 11;
    s->top++;  //Pushing an element
    //Poping an element out
    s->arr[s->top] = s->arr[s->top - 1];
    s->top--;
    s->arr[s->top] = s->arr[s->top - 1];
    s->top--;   //Poping an element


     //Check if stack is empty
    if(IsEmpty(s))
    {
        printf("The Stack is empty\n");
    }
    else
    {
        printf("The Stack is not empty\n");
    }
    

    
    return 0;
}