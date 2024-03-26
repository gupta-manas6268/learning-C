// https://www.hackerrank.com/challenges/for-loop-in-c/problem?isFullScreen=true



// Not Solved.

#include <stdio.h>

int main(){
    int arr[2];

    for(int i=0; i<2; i++){ scanf("%d", &arr[i]);}

    for(int i=0; i<2; i++){ 
        if(arr[i] == 1){ printf("one\n");} 
        if(arr[i] == 2){ printf("two\n");} 
        if(arr[i] == 3){ printf("three\n");} 
        if(arr[i] == 4){ printf("four\n");} 
        if(arr[i] == 5){ printf("five\n");} 
        if(arr[i] == 6){ printf("six\n");} 
        if(arr[i] == 7){ printf("seven\n");} 
        if(arr[i] == 8){ printf("eight\n");} 
        if(arr[i] == 9){ printf("nine\n");} 
        if(arr[i] > 9){ printf("nine\n");}

    }

    for(int i=0; i<2; i++){
        if(arr[i] % 2 == 0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
    }
    
    return 0;
}