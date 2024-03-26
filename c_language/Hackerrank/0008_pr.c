// Digit Frequency

// https://www.hackerrank.com/challenges/frequency-of-digits-1/problem?isFullScreen=false



// I solved this problem.















#include <stdio.h>

int main(){
    char s[1000];

    gets(s);
    int len = strlen(s);

    int ans[10];

    for(int i=0; i<10; i++){ ans[i] = 0;}

    for(int i=0; i<len; i++){
        if((s[i] >= 48) && (s[i] <= 57)){
            int index = s[i] - 48;

            ans[index]++;
        }
    }

    for(int i=0; i<10; i++){
        printf("%d ", ans[i]);
    }
    
    printf("\n");

    return 0;
}