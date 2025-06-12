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


// This function is wrong. 

// Node* inOrderPredecessor(Node* root){
//     root = root->left;
//     while(root->right != NULL){
//         root = root->right;
//     }

//     return root;
// }
// Node *delete(Node *root, int value){
//     Node* inPre;

//     if(root == NULL){
//         return NULL;
//     }
//     if((root->left == NULL) && (root->right == NULL)){
//         free(root);
//         return NULL;
//     }

//     // Search for the node to be deleted
//     if(value < root->data){
//         root->left = delete(root->left, value);
//     }
//     else if(value > root->data){
//         root->right = delete(root->right, value);
//     }

//     // Deletion strategy when the node is found.
//     else{
//         inPre = inOrderPredecessor(root);
//         root->data = inPre->data;
//         root->left = delete(root->left, inPre->data);
//     }
//     return root;
// }

Node *delete(Node *root, int value){
    if(root == NULL){
        return NULL;
    }

    // Search for the node to be deleted
    if(value < root->data){
        root->left = delete(root->left, value);
    }
    else if(value > root->data){
        root->right = delete(root->right, value);
    }

    // Deletion strategy when the node is found.
    else{
        // Node with only one child or no child
        if(root->left == NULL){
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL){
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // Node with two children: Get the inorder successor (smallest in the right subtree)
        Node* inSuc = root->right;
        while(inSuc->left != NULL){
            inSuc = inSuc->left;
        }

        // Copy the inorder successor's content to this node
        root->data = inSuc->data;

        // Delete the inorder successor
        root->right = delete(root->right, inSuc->data);
    }
    return root;
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
    p7->left = p8;

    inOrder(p);
    delete(p, 10);
    printf("\n");
    inOrder(p);
    

    return 0;
}