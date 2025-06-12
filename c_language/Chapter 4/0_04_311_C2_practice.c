// Q.17: Ramanujan number is the smallest number that can be expressed
//        as sum of two cubes in two different ways. Write a program to print
//        all such numbers up to a reasonable limit.


















#include <stdio.h>
#include <math.h>

int main(){

    int limit = 1000000; 
    int cubeRootLimit = 100;
    for(int a=1; a<cubeRootLimit; a++){
        for(int b=a; b<cubeRootLimit; b++){
            int sum_1 = pow(a, 3) + pow(b, 3);

            if(sum_1 > limit){
                break;
            }

            for(int d=a+1; d<=cubeRootLimit; d++){
                for(int e=d; e<=cubeRootLimit; e++){
                    int sum_2 = pow(d, 3) + pow(e, 3);

                    if(sum_2 > limit){
                        break;
                    }
                    else if(sum_1 == sum_2){
                        printf("%d is a Ramanujan number.\n", sum_1);
                    }
                }
            }
        }
    }
    return 0;
}