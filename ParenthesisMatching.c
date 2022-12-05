/*#include<stdio.h>
#include<stdlib.h>
struct stack{
    int size;
    int top;
    char *arr;
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
  int ParenthesisMatching(char * exp){
    // Create and initialise a stack
    struct stack * sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i]=='('){
            push(sp, '(');
        }
        else if(exp[i] == ')'){
            if (IsEmpty(sp));
            return 0;
        }
        pop(sp);   
    }
  }
  
  void push(struct stack * ptr, char val){
    if(IsFull(ptr)){
        printf("StackOverflow!!!\n Cannot push %d element to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
        static int i = 1;
//    i+=1;
        printf("Element number %d = %c\n", i++,val);
}  
}
char pop(struct stack * ptr){
    if(IsEmpty(ptr)){
    printf("Stack Underflow!!!\n Cannot pop %d element from the stack\n", (ptr->arr[ptr->top]));
    return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
int main()
{   char * exp = "8*(9)";
    

     //Check if stack is empty
    if(ParenthesisMatching(exp))
    {
        printf("The Parenthesis is matching\n");
    }
    else
    {
        printf("The Parenthesis is not matching\n");
    }
    

    
    return 0;
} */

#include <stdio.h>   //Sir's Code// 
#include <stdlib.h>
 
struct stack
{
    int size;
    int top;
    char *arr;
};
 
int isEmpty(struct stack *ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
int isFull(struct stack *ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
 
void push(struct stack* ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
 
char pop(struct stack* ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}
 
int parenthesisMatch(char * exp){
    // Create and initialize the stack
    struct stack* sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *)malloc(sp->size * sizeof(char));
 
 
    for (int i = 0; exp[i]!='\0'; i++)
    {
        if(exp[i]=='('){
            push(sp, '(');
        }
        else if(exp[i]==')'){
            if(isEmpty(sp)){
                return 0;
            }
            pop(sp); 
        }
    }
 
    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
    
}
int main()
{
    char * exp = "((8)(*--$$9))";
    // Check if stack is empty
    if(parenthesisMatch(exp)){
        printf("The parenthesis is matching");
    }
    else{
        printf("The parenthesis is not matching");
    }
    return 0;
}
