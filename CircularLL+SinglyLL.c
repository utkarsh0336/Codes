/* #include<stdio.h>     This is my prog of Singly Linked List 
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

void Traversal(struct Node* head){
struct Node *ptr = head;
while(ptr !=NULL){
printf("Element = %d\n", ptr->data);
ptr = ptr->next;
}
}

struct Node * InsertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node * InsertAtIndex(struct Node *head, int data, int index){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    for(int i = 1 ; i < index - 1; i++)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr; 
    return head;
}

struct Node *InsertAtEnd(struct Node *head, int data){
    struct Node *ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    while(p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}

struct Node * InsertBetweenNode(struct Node* head, struct Node* prevNode, int data){
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    struct Node *p = head;
    while(p->next != prevNode)
    {
        p = p->next;
    }
    ptr->data = data;
    ptr->next = prevNode->next;
    prevNode->next = ptr;
    return head;
}
int main()
{   
    head = (struct Node*)malloc(sizeof(struct Node)); 
    second = (struct Node*)malloc(sizeof(struct Node)); 
    third = (struct Node*)malloc(sizeof(struct Node)); 
    fourth = (struct Node*)malloc(sizeof(struct Node)); 

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = fourth;
    fourth->data = 4;
    fourth->next = NULL;
    printf("Linked List before insertion\n");
    //Traversal(head);
   // head = InsertAtFirst(head, 5);
    printf("Linked List after insertion\n");
    //Traversal(head);
    printf("The Linked List after inserting in between\n");
    //head = InsertAtIndex(head, 6, 4);
    //Traversal(head);
    printf("The Linked List after inserting at the end\n");
    //InsertAtEnd(head,7);
    //Traversal(head);
    printf("The Linked List after inserting a node after a node\n");
    head = InsertBetweenNode(head,third,8);
    Traversal(head);
    
    return 0;
} */

#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node *next;
};


void CTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
    printf("Element = %d\n", ptr->data);
    ptr = ptr->next;
    }
    while(ptr != head);
}

struct Node * InsertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
   
    struct Node *p = head->next;
    while(p->next != head){
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = head; 
    head = ptr;
    return head;
}
int main()
{   
struct Node *head;
struct Node *second;
struct Node *third;
struct Node *fourth;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;
    second->data = 11;
    second->next = third;
    third->data = 21;
    third->next = fourth ;
    fourth->data = 66;
    fourth->next = head;
    printf("The Circular Linked List is \n");
    CTraversal(head);
    printf("The Circular Linked List after inserting head\n");
    head = InsertAtFirst(head,45);
    CTraversal(head);
    
    return 0;
}