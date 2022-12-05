#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *prev;
    struct Node *next;
};
struct Node *N1;
struct Node *N2;
struct Node *N3;
struct Node *N4;

void Traversal(struct Node *head){
   struct Node* ptr = N1;
   printf("The doubly linked list(from left to right)\n");
   while(ptr != NULL)
   {
    printf("Element = %d\n", ptr->data);
    ptr = ptr->next;
   } 
   struct Node * p = N4;
   printf("The doubly linked list(from right to left)\n");
  // printf("Element = %d\n", p->data);
   while(p != NULL)
   {
    printf("Element = %d\n", p->data);
    p = p->prev;
   }
}
int main()
{   
    N1 = (struct Node*)malloc(sizeof(struct Node));
    N2 = (struct Node*)malloc(sizeof(struct Node));
    N3 = (struct Node*)malloc(sizeof(struct Node));
    N4 = (struct Node*)malloc(sizeof(struct Node));

    N1->data = 23;
    N1->prev = NULL;
    N1->next = N2;

    N2->data = 34;
    N2->prev = N1;
    N2->next = N3;

    N3->data = 56;
    N3->prev = N2;
    N3->next = N4;

    N4->data = 52;
    N4->prev = N3;
    N4->next = NULL;

    Traversal(N1);
    
    return 0;
}
