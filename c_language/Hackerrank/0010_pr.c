// Boxes through a Tunnel

// https://www.hackerrank.com/challenges/too-high-boxes/problem?isFullScreen=false


// Not Solved.

// We have to solve it in the manner as given the Question.








#include <stdio.h>

int main(){
    int tc; scanf("%d", &tc);
    
    while (tc--){

        int len, wid, hei; scanf("%d %d %d", &len, &wid, &hei);

        if(hei >= 41){}
        else{ printf("%d\n", len * wid * hei);}   
    }

    return 0;
}