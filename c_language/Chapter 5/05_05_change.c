#include <stdio.h>
void change(int a);

int main(){
    int b = 344;
    printf("The value of b before change is %d\n", b);
    // change(b);
    change(b = 355);
    printf("The value of b after change is %d\n", b);

    return 0;
}

void change(int b){
    b = 77;
}