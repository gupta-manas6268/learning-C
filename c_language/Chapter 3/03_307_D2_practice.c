#include <stdio.h>

int max_func(int R, int G, int B){
    // return R>G ? (R>B ? R : B) : (G>B ? G : B); 
    if (R>=G && R>=B){
        return R;
    } 
    else if(G>=R && G>=B){
        return G;
    } 
    else{
        return B;
    }
}

int main(){
    int R, G, B;
    printf("Enter the value of colors in Red-Green-Blue (RGB) format\n");
    printf("Red: ");
    scanf("%d", &R);
    printf("Green: ");
    scanf("%d", &G);
    printf("Blue: ");
    scanf("%d", &B);
    // int maxi = max_func(R,G,B);
    // printf("maxi = %d\n", maxi);
    float white = ((float)(max_func(R, G, B)))/255;
    float cyan = (white - ((float)R/255))/white;
    float magneta = (white - ((float)G/255))/white;
    float yellow = (white - ((float)B/255))/white;
    float black = 1 - white;\

    printf("White = %f\n", white);
    printf("Cyan = %f\n", cyan);
    printf("Magneta = %f\n", magneta);
    printf("Yellow = %f\n", yellow);
    printf("Black = %f\n", black);
    return 0;
}