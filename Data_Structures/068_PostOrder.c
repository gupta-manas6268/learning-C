#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}Node;

struct node* createNode(int data){
    Node *n;
    n = (Node *) malloc(sizeof(struct node));
    n->data = data;
    n->left = NULL;
    n->right = NULL;

    return n;
}

void postOrder(Node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ", root->data);
    }
}

int main(){
    // Constructing the root node = Using Function (Recommended)
    Node *p = createNode(4);
    Node *p1 = createNode(1);
    Node *p2 = createNode(6);
    Node *p3 = createNode(5);
    Node *p4 = createNode(2);

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    postOrder(p);

    return 0;
}