#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
struct Node* top = NULL;
int IsEmpty(struct Node * top){
    if(top == NULL)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int IsFull(struct Node * top){
    struct Node * p = (struct Node *)malloc(sizeof(struct Node));
    if(p == NULL)
    {
        return 1;
    }
    else{
        return 0;
    }
}
struct Node* push(struct Node* top, int x){
if(IsFull(top))
{
    printf("Stack Overflow\n");
}
else{
     struct Node * n = (struct Node*)malloc(sizeof(struct Node));
n->data = x;
n->next = top;
top = n;
return top;
}
}
int pop(struct Node* *top){
    if(IsEmpty(*top))
    {
        printf("Stack Underflow!!!\n");
        return 1;
    }   
    else{
        struct Node* n = *top;
        *top = (*top)->next;
        int x = n->data;
        free(n);
        return x;
    }
}
void LinkedListTraversal(struct Node* ptr){
    while(ptr != NULL)
    {
        printf("Element  = %d\n", ptr->data);
        ptr = ptr->next;
    }
}
int peek(int pos){
    struct Node * ptr = top;
    for(int i = 0;(i < pos - 1 && ptr != NULL); i++)

    {
        ptr = ptr->next;
    }
    if(ptr != NULL)
    {
        return ptr->data;
    }
    else{
        return -1;
    }
}
int StackTop(struct Node * ptr){
        return top->data;
}
int StackBottom(struct Node * ptr){
    struct Node * p = top;
    while(p != NULL)
    {
        p = p->next;
    }
    if(p == NULL)
    {
        return -1;
    }
    else{
        return p->data;
    }
}
int main()
{
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    LinkedListTraversal(top);
    int element = pop(&top);
    printf("Popped Element = %d\n", element);
    LinkedListTraversal(top);
    printf("The element at position 2 is %d\n", peek(2));
    LinkedListTraversal(top);
    printf("The first element is %d\n", StackTop(top));
    printf("The last element is %d\n", StackBottom(top));
        return 0;
}