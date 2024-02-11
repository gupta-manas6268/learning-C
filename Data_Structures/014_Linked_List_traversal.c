#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;  // Now, ptr points to the next element of the Linked List. 
    }
}

int main(){
    // TC of Traversal of Linked List = O(n).  (where, n = length of Linked List.)

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
    head->data = 7;
    head->next = second;

    // Link second and third nodes.
    second->data = 11;
    second->next = third;

    // Link third and fourth nodes.
    third->data = 66;
    third->next = fourth;

    // Terminate the list at the third node.
    fourth->data = 41;
    fourth->next = NULL;

    linkedListTraversal(head);

    return 0;
}