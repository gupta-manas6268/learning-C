// https://www.codewithharry.com/videos/data-structures-and-algorithms-in-hindi-34/

// See 1-Screenshot notes.

#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    char *arr;
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

void push(struct stack *ptr, char val){
    if(isFull(ptr)){
        printf("Stack Overflow! Cannot push %d to the stack\n", val);
    }
    else{
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
char pop(struct stack *ptr){
    if(isEmpty(ptr)){
        printf("Stack Underflow! Cannot pop from the stack\n");
        return -1;
    }
    else{
        char val = ptr->arr[ptr->top];
        ptr->top--;
        
        return val;
    }
}

int match(char a, char b){
    if((a == '{') && (b == '}')){
        return 1;
    }
    if((a == '(') && (b == ')')){
        return 1;
    }
    if((a == '[') && (b == ']')){
        return 1;
    }

    else{
        return 0;
    }
}

int parenthesisMatch(char *expression){
    // Create and initialize the stack
    struct stack *sp;
    sp->size = 100;
    sp->top = -1;
    sp->arr = (char *) malloc(sp->size * sizeof(char));
    char popped_ch;

    for(int i=0; expression[i] != '\0'; i++){
        if((expression[i] == '(') || (expression[i] == '{') || (expression[i] == '[')){
            push(sp, expression[i]);
        }
        else if(expression[i] == ')'){
            if(isEmpty(sp)){
                return 0;
            }
            else{
                popped_ch = pop(sp);

                if(!match(popped_ch, expression[i])){
                    return 0;
                }
            }
        }
    }

    if(isEmpty(sp)){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    // char *expression = "8*(9)";
    // char *expression = "8)*(9)";
    char *expression = "((8)(*--$$9))";

    // Check the Parenthesis of the stack.
    if(parenthesisMatch(expression)){
        printf("The parenthesis is matching\n");
    }
    else{
        printf("The parenthesis is not matching\n");
    }

    return 0;
}