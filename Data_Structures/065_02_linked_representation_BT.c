// Linked representation Binary Tree.

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
    n->data = 2;
    n->left = NULL;
    n->right = NULL;

    return n;
}

int main(){
    // Constructing the root node = Using Function (Recommended)
    Node *p = createNode(2);

    // Constructing the second node.
    Node *p1 = createNode(1);

    // Constructing the third node.
    Node *p2 = createNode(4);

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;

    return 0;
}