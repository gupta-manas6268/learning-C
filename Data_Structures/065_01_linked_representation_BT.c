// Linked representation Binary Tree.

#include <stdio.h>
#include <malloc.h>

typedef struct node{
    int data;
    struct node* left;
    struct node* right;
}Node;

int main(){
    // Constructing the root node.
    Node *p;
    p = (Node *) malloc(sizeof(struct node));
    p->data = 2;
    p->left = NULL;
    p->right = NULL;

    // Constructing the second node.
    Node *p1;
    p1 = (Node *) malloc(sizeof(struct node));
    p1->data = 1;
    p1->left = NULL;
    p1->right = NULL;

    // Constructing the third node.
    Node *p2;
    p2 = (Node *) malloc(sizeof(struct node));
    p2->data = 4;
    p2->left = NULL;
    p2->right = NULL;

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;

    return 0;
}