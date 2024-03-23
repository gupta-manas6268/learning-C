// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-47/

// See 2-Screenshot notes.

// (enqueueF -> enqueueFront)
// (enqueueR -> enqueueRear)
// (dequeueF -> dequeueFront)
// (dequeueR -> dequeueRear)

#include <bits/stdc++.h>

struct DEqueue{
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

int main(){
    
    return 0;
}