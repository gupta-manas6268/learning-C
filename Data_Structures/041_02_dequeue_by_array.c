#include <stdio.h>
#include <stdlib.h>

struct queue{
    int size;
    int front;
    int rear;
    int *arr;
};

int isEmpty(struct queue *q){
    if(q->rear == q->front){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct queue *q){
    if(q->rear == q->size - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(struct queue *q, int val){
    if(isFull(q)){
        printf("This Queue is full");
    }
    else{
        q->rear++;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct queue *q){
    int a = -1;

    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->front++;
        a = q->arr[q->front];
    }
    return a;
}

int main(){
    struct queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);

    // Dequeue few elements
    printf("Dequeuing element %d\n", dequeue(&q));
    printf("Dequeuing element %d\n", dequeue(&q));

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }

    return 0;
}