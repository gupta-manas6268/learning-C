// Make Code for DEQueue by arrays yourself properly.




















#include <stdio.h>

typedef struct DEqueue{
    int size, front, rear;
    int *arr;
}DEQueue;

int isEmpty(DEQueue *q){
    if(q->rear == q->front){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(DEQueue *q){
    if(q->rear  == q->size-1){ return 1;}
    else{ return 0;}
}

void enqueueBack(struct DEQueue *q, int val){
    if(isFull(q)){
        printf("This DEQueue is full\n");
    }
    else{
        q->rear++;
        q->arr[q->rear] = val;
    }
}
void enqueueFront(struct DEQueue *q, int val){
    if(isFull(q)){
        printf("This DEQueue is full\n");
    }
    else{
        q->arr[q->front] = val;
    }
}

int dequeueFront(DEQueue *q){
    int a = -1;

    if(isEmpty(q)){
        printf("This DEQueue is Empty\n");
    }
    else{
        q->front++;
        a = q->arr[q->front];
    }

    return a;
}
int dequeueBack(DEQueue *q){
    int a = -1;

    if(isEmpty(q)){
        printf("This DEQueue is Empty\n");
    }
    else{
        q->arr[q->rear] = a;
    }

    return a;
}

int main(){
    struct DEqueue q;
    q.size = 100;
    q.front = q.rear = -1;
    q.arr = (int *) malloc(q.size * (sizeof(int)));

    // Enqueue-Back elements.
    enqueueBack(&q, 12);
    enqueueBack(&q, 15);

    // Dequeue-Front elements.
    printf("Dequeue-Front: %d\n",dequeueFront(&q));
    printf("Dequeue-Front: %d\n",dequeueFront(&q));

    return 0;
}