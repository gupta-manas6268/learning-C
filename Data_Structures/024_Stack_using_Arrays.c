#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int *arr;  // To make Array.
};

int isEmpty(struct stack *ptr){
    if(ptr->top == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(struct stack *ptr){
    if(ptr->top == ptr->size -1){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // struct stack s;
    // s.size = 80;
    // s.top = -1;
    // s.arr = (int *) malloc(s.size * sizeof(int));

    struct stack *s;
    s->size = 80;
    s->top = -1;
    s->arr = (int *) malloc(s->size * sizeof(int));

    // Pushing an element manually
    // s->arr[0] = 4;  // Also run code when you comment these
    // s->top++;       //  two lines.

    // Check if stack is empty
    if(isEmpty(s)){ // These two lines are same
    // if(isEmpty(s) == 1){
        printf("The stack is empty\n");
    }
    else{
        printf("The stack is not empty\n");
    }

    if(isFull(s)){ 
    // if(isFull(s) == 1){
        printf("The stack is full\n");
    }
    else{
        printf("The stack is not full\n");
    }

    return 0;
}