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
void InOrder(struct Node * root){
    if(root != NULL){
        InOrder(root->left);
        printf("%d ",root->data);
        InOrder(root->right);
    }
    
}
struct Node* search(struct Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(root->data == key){
        return root;
    }
    else if(root->data > key){
        return search (root->left, key);
    }
    else
        return search(root->right, key);

}
int main()
{   
    /*Finally The Tree looks likes
                5
               / \
              3   6
             / \
            1  4
        */
    struct Node *p = CreateNode(5);
    struct Node *p1 = CreateNode(3);
    struct Node *p2 = CreateNode(6);
    struct Node *p3 = CreateNode(1);
    struct Node *p4 = CreateNode(4);

    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    // InOrder(p);
    struct Node * n = search(p,3);
    if(n != NULL){
    printf("Found: %d\n", n->data);
    }
    else
    printf("Element not found\n");
    return 0;
}