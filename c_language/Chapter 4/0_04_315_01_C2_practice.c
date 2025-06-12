// Q.21: Write a program to produce the following output:
//                  1
//                1   1
//              1   2   1
//            1   3   3   1
//          1   4   6   4   1
















#include <stdio.h>

int main(){
    for(int line=5; line>=1; line--){
        for(int i=1;  i<=2*(line-1); i++){
            printf(" ");
        }
        if(line==5){
            printf("1\n");
        }
        else if(line==4){
            printf("1   1\n");
        }
        else if(line==3){
            printf("1   2   1\n");
        }
        else if(line==2){
            printf("1   3   3   1\n");
        }
        else if(line==1){
            printf("1   4   6   4   1\n");
        }
    }   
    return 0;
}