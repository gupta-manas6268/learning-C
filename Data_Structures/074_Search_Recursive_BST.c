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

struct node* search(Node* root, int key){
    if(root == NULL){
        return NULL;
    }
    if(key == root->data){
        return root;
    }
    else if(key < root->data){
        return search(root->left, key);
    }
    else{
        return search(root->right, key);
    }
}

int main(){
    // Constructing the root node = Using Function (Recommended)
    Node *p = createNode(50);
    Node *p1 = createNode(40);
    Node *p2 = createNode(60);
    Node *p3 = createNode(20);
    Node *p4 = createNode(45);
    Node *p5 = createNode(55);
    Node *p6 = createNode(70);

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p2->left = p5;
    p2->right = p6;

    Node* n = search(p, 3);
    // struct node* n = search(p, 70);
    if(n != NULL){
        printf("Found: %d", n->data);
    }
    else{
        printf("Element not found");
    }

    return 0;
}