// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-46/

// Queue using Linked List
#include <stdio.h>
#include <stdlib.h>

struct Node * front = NULL;
struct Node * rear = NULL;

struct Node{
    int data;
    struct Node * next;
};

void linkedListTraversal(struct Node *ptr){
    printf("Printing the elements of this Linked List\n");

    while (ptr != NULL){
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

void enqueue(int val){ // val -> value
    struct Node *n = (struct Node *) malloc(sizeof(struct Node));

    if(n == NULL){
        printf("Queue is Full\n");
    }
    else{
        n->data = val;
        n->next = NULL;

        if(front == NULL){
            front = rear = n;
        }
        else{
            rear->next = n;
            rear = n;
        }
    }
}

int dequeue(){ // val -> value
    int val = -1;
    struct Node *ptr = front;

    if(front == NULL){
        printf("Queue is Empty\n");
    }
    else{
        front = front->next;
        val = ptr->data;
        free(ptr);
    }

    return val;
}

int main(){
    
    linkedListTraversal(front);
    printf("\n");

    printf("Dequeing element %d\n", dequeue());
    enqueue(34);
    enqueue(4);
    enqueue(7);
    enqueue(17);

    printf("Dequeing element %d\n", dequeue());
    printf("Dequeing element %d\n", dequeue());
    linkedListTraversal(front);

    return 0;
}