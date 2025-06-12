#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

struct Node * top = NULL; // See this line carefully, here we make top a
                          //  a global variable.

void linkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;  
    }
}

int isEmpty(struct Node* top){
    if(top == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct Node* top){
    struct Node* p = (struct Node*) malloc(sizeof(struct Node));

    if(p == NULL){
        return 1;
    }
    else{
        return 0;
    }
}

struct Node* push(struct Node* top, int x){
    if(isFull(top)){
        printf("Stack Overflow\n");
    }
    else{
        struct Node* n = (struct Node*) malloc(sizeof(struct Node));
        n->data = x;
        n->next = top;
        top = n;

        return top;
    }
}

int pop(struct Node* Top){
    if(isEmpty(Top)){
        printf("Stack Underflow\n");
    }
    else{
        struct Node* n = Top;
        top = (Top)->next;
        int x = n->data;
        free(n);

        return x;
    }
}

int main(){
    top = push(top, 78);
    top = push(top, 7);
    top = push(top, 8);
    // linkedListTraversal(top);
    printf("\n");

    int element = pop(top); // Because of line-9, we didn't need '&' in this line.
    printf("Popped element is %d\n", element);

    linkedListTraversal(top);

    return 0;
}