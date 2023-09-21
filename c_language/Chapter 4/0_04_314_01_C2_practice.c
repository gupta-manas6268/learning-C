// Q.20: Write a program to produce the following output:
//        A B C D E F G F E D C B A
//        A B C D E F   F E D C B A
//        A B C D E       E D C B A
//        A B C D           D C B A
//        A B C               C B A
//        A B                   B A
//        A                       A

















#include <stdio.h>

int main(){
    for(int c=65; c<=71; c++){
        printf("%c ", c);
    }    
    for(int c=70; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");



    for(int c=65; c<=70; c++){
        printf("%c ", c);
    }  
    for(int i=1; i<=1; i++){
    printf("  ");  
    }
    for(int c=70; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");



    for(int c=65; c<=69; c++){
        printf("%c ", c);
    }  
    for(int i=1; i<=3; i++){
    printf("  ");  
    }  
    for(int c=69; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");

 

    for(int c=65; c<=68; c++){
        printf("%c ", c);
    }  
    for(int i=1; i<=5; i++){
    printf("  ");  
    }  
    for(int c=68; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");



    for(int c=65; c<=67; c++){
        printf("%c ", c);
    }  
    for(int i=1; i<=7; i++){
    printf("  ");  
    }
    for(int c=67; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");



    for(int c=65; c<=66; c++){
        printf("%c ", c);
    }  
    for(int i=1; i<=9; i++){
    printf("  ");  
    } 
    for(int c=66; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");



    for(int c=65; c<=65; c++){
        printf("%c ", c);
    }  
    for(int i=1; i<=11; i++){
    printf("  ");  
    }
    for(int c=65; c>=65; c--){
        printf("%c ", c);
    }
    printf("\n");

    return 0;
}