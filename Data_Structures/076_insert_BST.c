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

struct node* searchIterator(Node* root, int key){
    while(root != NULL){
        if(key == root->data){
            return root;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }
    return NULL;
}

void insert(Node* root, int key){
    Node *prev = NULL;
    while(root != NULL){
        prev = root;

        if(key == root->data){
            printf("Cannot insert %d, already in BST", key);
            return;
        }
        else if(key < root->data){
            root = root->left;
        }
        else{
            root = root->right;
        }
    }

    Node *new = createNode(key);
    if(key < prev->data){
        prev->left = new;
    }
    else{
        prev->right = new;
    }
}

int main(){
    // Constructing the root node = Using Function (Recommended)
    Node *p = createNode(8);
    Node *p1 = createNode(3);
    Node *p2 = createNode(10);
    Node *p3 = createNode(1);
    Node *p4 = createNode(6);
    Node *p5 = createNode(4);
    Node *p6 = createNode(7);

    Node *p7 = createNode(14);
    Node *p8 = createNode(13);

    // Linking the root node with left and right children.
    p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;
    p4->left = p5;
    p4->right = p6;

    p2->right = p7;
    p5->left = p8;

    insert(p, 7);
    // insert(p, 9);
    printf("%d\n", p->right->left->data);

    return 0;
}