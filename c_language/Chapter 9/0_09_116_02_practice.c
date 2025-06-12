// Q.4: Create an array of 5 complex numbers with a structure representing
//       a Complex number, & display them with the help of a display
//       function. The values must be taken as an input from the user.




















#include <stdio.h>

typedef struct complex{
    int x; int y;
}com;

void display(com com[], int size){
    for(int i=0; i < size; i++){
        printf("The real part is: %d\n", com[i].x);
        printf("The complex part is: %d\n", com[i].y);
    }
}

int main(){
    com comp[5];

    for(int i=0; i<5; i++){
        scanf("%d %d", &comp[i].x, &comp[i].y);
    }

    display(comp, 5);

    return 0;
}