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
struct Node * isBSTIter(struct Node* root, int key){
    while(root != NULL){
         if(root->data == key){
           return root;
        }
        else if(root->data > key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}
void insert(struct Node * root, int key){
    struct Node * prev = NULL;
    while(root != NULL){
        prev = root;
        if(key == root->data){
            return;
        }
        else if(root->data > key){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    struct Node* new = CreateNode(key);
    if(key < prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }

}
struct Node * inOrderPredecessor(struct Node * root){
    root = root->left;
    while(root->right != NULL){
        root = root->right;
    }
    return root;
}
struct Node* deleteNode(struct Node *root, int value){
    struct Node * iPre;
    if(root == NULL){
        return NULL;
    }
    if(root->left == NULL && root->right == NULL){
        free(root);
        return NULL;
    }
    //Searching the value to be deleted
    if(value < root->data){
        root->left = deleteNode(root->left,value);
    }
    else if(value > root->data){
        root->right = deleteNode(root->right,value);
    }
    else{
        iPre = inOrderPredecessor(root);
        root->data = iPre->data;
        root->left = deleteNode(root->left,iPre->data);
    }
    return root;
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
    // struct Node * n = isBSTIter(p,7);
    // if(n != NULL){
    // printf("The found element is %d \n", n->data);
    // }
    // else
    // {
    //     printf("Element not found\n");
    // }
    InOrder(p);
    printf("\n");
    deleteNode(p , 7);
   InOrder(p);

    return 0;
}