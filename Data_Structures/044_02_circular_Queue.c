// See the OUTPUT of this code carefully & also compare it with
//  '041_03_queue.c' file OUTPUT

#include <stdio.h>
#include <stdlib.h>

struct circularQueue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct circularQueue *q){ // Same as that of Linear Queue
    if(q->rear == q->front){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct circularQueue *q){  // Different from Linear Queue
    if(((q -> rear+1)% (q -> size)) == q->front){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct circularQueue *q, int val){  // Different from Linear Queue
    if(isFull(q)){
        printf("This Queue is full\n");
    }
    else{
        q->rear = (q->rear+1)% q->size;
        q->arr[q->rear] = val;

        printf("Enqued element: %d\n", val);
    }
}

int dequeue(struct circularQueue *q){  // Different from Linear Queue
    int a = -1;

    if(isEmpty(q)){
        printf("This Queue is empty\n");
    }
    else{
        q->front = (q->front + 1) % q->size;
        a = q->arr[q->front];
    }
    return a;
}

int main(){
    struct circularQueue q;
    q.size = 4; // See this line carefully
    q.front = q.rear = 0; // See this line carefully
    q.arr = (int*) malloc(q.size*sizeof(int));

    // Enqueue few elements
    enqueue(&q, 12);
    printf("1.\n");
    enqueue(&q, 15);
    printf("2.\n");
    enqueue(&q, 1);
    printf("3.\n");

    enqueue(&q, 8);
    printf("4.\n");

    // Dequeue few elements
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("\n");

    enqueue(&q, 45);
    enqueue(&q, 45);
    enqueue(&q, 45);
    printf("\n");

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }

    if(isFull(&q)){
        printf("Queue is full\n");
    }
    else{
        printf("Queue is not full\n");
    }

    return 0;
}