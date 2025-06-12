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

void inOrder(Node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ", root->data);
        inOrder(root->right);
    }
}

int isBST(Node* root){
    static Node *prev = NULL;

    if(root != NULL){
        if(!isBST(root->left)){
            return 0;
        }
        if((prev != NULL) && (root->data <= prev->data)){
            return 0;
        }

        prev = root;
        return isBST(root->right);
    }
    else{
        return 1;
    }
}

int main(){
    // Constructing the root node = Using Function (Recommended)
    Node *p = createNode(5);
    Node *p1 = createNode(3);
    Node *p2 = createNode(6);
    Node *p3 = createNode(1);
    Node *p4 = createNode(4);

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

    inOrder(p);
    printf("\n");
    printf("%d", isBST(p));

    return 0;
}