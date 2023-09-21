#include <stdio.h>

int * comparison(int *a, int *b){
    a > b? a:b;
}
int main(){
    int a = 60;
    int *ptr_1 = &a;

    int b = 34;
    int *ptr_2 = &b;

    printf("ptr_1 = %u\n", ptr_1);
    printf("ptr_2 = %u\n", ptr_2);
    
    int *ans = comparison(ptr_1, ptr_2);
    printf("The pointer which has larger value is %u\n", ans);

    return 0;
}