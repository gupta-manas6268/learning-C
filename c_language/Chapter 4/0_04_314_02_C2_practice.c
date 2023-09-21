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
    int line = 1;
    for(int line=1; line<=7; line++){
        printf(" ");
        for(int c=65; c<= 71-line+1; c++){
            printf("%c ", c);
        }
        for(int i=1; i<= 2*(2*(line-1))-2; i++){
            printf(" ");
        }
        for(int c= 71-line+1; c>=65; c--){
            if(c==71){}
            else{
                printf("%c ",c);
            }
        }
        printf("\n");
    }
    
    return 0;
}