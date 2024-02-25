// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-41/

// In Screenshots notes, (f -> front, r -> rear).

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

int main(){
    struct queue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = (int*) malloc(q.size*sizeof(int));

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }

    // Enqueue few elements
    enqueue(&q, 12);
    enqueue(&q, 15);

    if(isEmpty(&q)){
        printf("Queue is empty\n");
    }
    else{
        printf("Queue is not empty\n");
    }

    return 0;
}