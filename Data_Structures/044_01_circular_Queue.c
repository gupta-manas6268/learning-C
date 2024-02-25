// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-44/

// See 1-Screenshot notes.

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
        printf("This Queue is full");
    }
    else{
        q->rear = (q->rear+1)% q->size;
        q->arr[q->rear] = val;
    }
}

int dequeue(struct circularQueue *q){  // Different from Linear Queue
    int a = -1;

    if(isEmpty(q)){
        printf("This Queue is empty");
    }
    else{
        q->front = (q->front + 1) % q->size;
        a = q->arr[q->front];
    }
    return a;
}

int main(){
    struct circularQueue q;
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