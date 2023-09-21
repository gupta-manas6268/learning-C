// It is Q.6 in the lecture
// Q.3: Write a program to find greatest of four
//       numbers entered by the user ?


















#include <stdio.h>

    int main(){
        float a, b, c, d;
        printf("Enter the value of a, b, c and d \n");
        scanf("%f %f %f %f", &a, &b, &c, &d);

        if(a==b==c==d){
            printf("a,b,c and d are equal.\n");
        }
        else if(a>=b && a>=c && a>=d){
            if(a==b && a==c){
            printf("a,b and c are equal and three of them are greatest of all \n");}
            else if(a==b && a==d){
            printf("a,b and d are equal and three of them are greatest of all \n");}
            else if(a==d && a==c){
            printf("a,c and d are equal and three of them are greatest of all \n");}

            else if(a==b){
            printf("a and b are equal and both are greatest of all \n");}
            else if(a==c){
            printf("a and c are equal and both are greatest of all \n");}
            else if(a==d){
            printf("a and d are equal and both are greatest of all \n");}

            else{
            printf("a is the greatest of all \n");}
        }
        else if(b>=c && b>=d && b>=a){
            if(b==a && b==c){
            printf("b,a and c are equal and three of them are greatest of all \n");}
            else if(b==a && b==d){
            printf("b,a and d are equal and three of them are greatest of all \n");}
            else if(b==d && b==c){
            printf("b,c and d are equal and three of them are greatest of all \n");}

            else if(b==a){
            printf("b and a are equal and both are greatest of all \n");}
            else if(b==c){
            printf("b and c are equal and both are greatest of all \n");}
            else if(b==d){
            printf("b and d are equal and both are greatest of all \n");}

            else{
            printf("b is the greatest of all \n");}
        }
        else if(c>=a && c>=b && c>=d){
            if(c==a && c==b){
            printf("c,a and b are equal and three of them are greatest of all \n");}
            else if(c==a && c==d){
            printf("c,a and d are equal and three of them are greatest of all \n");}
            else if(c==d && c==b){
            printf("c,b and d are equal and three of them are greatest of all \n");}

            else if(c==a){
            printf("c and a are equal and both are greatest of all \n");}
            else if(c==b){
            printf("c and b are equal and both are greatest of all \n");}
            else if(c==d){
            printf("c and d are equal and both are greatest of all \n");}

            else{
            printf("c is the greatest of all \n");}
        }
        else if(d>=a && d>=b && d>=c){
            printf("d is the greatest of all \n");
        }

    return 0;
}