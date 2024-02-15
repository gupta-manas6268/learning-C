// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-31/
// Go to this website.

// There is Screenshot notes in this Lecture.

// op -> operation.

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

int peek(int position){
    struct Node* ptr = top;

    for(int i=0; (i < position-1 && ptr!=NULL); i++){
        ptr = ptr->next;
    }

    if(ptr != NULL){
        return ptr->data;
    }
    else{
        return -1;
    }
}

int main(){
    top = push(top, 28);
    top = push(top, 18);
    top = push(top, 15);
    top = push(top, 7);
    
    linkedListTraversal(top);

    for(int i=1; i <= 4; i++){
        printf("Value at position %d is: %d\n", i, peek(i));
    }

    return 0;
}