// Doubly Linked list.

#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
    struct Node * prev;
};

void linkedListTraversal(struct Node *head, struct Node *fourth){
    struct Node *ptr1 = head;

    printf("Elements in increasing order\n");
    while(ptr1 != NULL){  
        printf("Element is %d\n", ptr1->data);

        if(ptr1->next != NULL){
            ptr1 = ptr1->next;
        }
        else{
            break;
        }
    }
    printf("\n");

    printf("Elements in decreasing order\n");
    while (ptr1 != NULL){
        printf("Element is %d\n", ptr1->data);
        
        if(ptr1 != NULL){
            ptr1 = ptr1->prev;
        }
    }
    
}

int main(){
    struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * fourth;

    // Allocate memory for nodes in the linked list in Heap.
    head = (struct Node *) malloc(sizeof(struct Node));
    second = (struct Node *) malloc(sizeof(struct Node));
    third = (struct Node *) malloc(sizeof(struct Node));
    fourth = (struct Node *) malloc(sizeof(struct Node));

    // Link first and second nodes.
    head->data = 4;
    head->next = second;
    head->prev = NULL;

    // Link second and third nodes.
    second->data = 3;
    second->next = third;
    second->prev = head;

    // Link third and fourth nodes.
    third->data = 6;
    third->next = fourth;
    third->prev = second;

    // Terminate the list at the third node.
    fourth->data = 1;
    fourth->next = NULL; // See this line carefully.
    fourth->prev = third;

    linkedListTraversal(head, fourth);

    return 0;
}