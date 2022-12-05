#include<stdio.h>
#include<malloc.h>

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* CreateNode(int data){
    struct Node* p;   //Creating a node pointer
    p = (struct Node*)malloc(sizeof(struct Node));   //Allocating memory in the heap
    p->data = data;   //Setting the data
    p->left = NULL;  //Setting the left and right children to NULL
    p->right = NULL;
    return p;  //Finally returning the created node.
}


int main()
{   /*
    // Constructing The Root Node
    struct Node *p; 
    p = (struct Node*) malloc(sizeof(struct Node));
    p->data = 2; 
    p->left = NULL; 
    p->right = NULL;
    
     // Constructing The Second Node
    struct Node *p1;
    p1 = (struct Node*) malloc(sizeof(struct Node)); 
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;
    
     // Constructing The Third Node
    struct Node *p2;
    p2 = (struct Node*) malloc(sizeof(struct Node)); 
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;
    
    // Linking the node with left and right children 
    p->left = p1;
    p->right = p2;
    */

   // Constructing The Root Node using Functions (Recommended)
    struct Node *p; 
    struct Node * p = CreateNode(2);
    struct Node * p1 = CreateNode(4);
    struct Node * p2 = CreateNode(1);
    p->left = p1;
    p->right = p2;
    

    return 0;
}