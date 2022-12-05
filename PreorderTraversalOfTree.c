#include<stdio.h>
#include<malloc.h>
struct Node{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* CreateNode(int data){
    struct Node* p;
    p = (struct Node*) malloc(sizeof(struct Node));
    p->data = data;
    p->left = NULL;
    p->right = NULL;
    return p;
}
void preOrder(struct Node * root){
    if(root != NULL){
        printf("%d ",(root->data));
        preOrder(root->left);
        preOrder(root->right);
    }
}
int main()
{   
    /*Finally The Tree looks likes
                4
               / \
              1   6
             / \
            5  2
        */
    struct Node *p = CreateNode(4);
    struct Node *p1 = CreateNode(1);
    struct Node *p2 = CreateNode(6);
    struct Node *p3 = CreateNode(5);
    struct Node *p4 = CreateNode(2);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    preOrder(p);

    
    return 0;
}