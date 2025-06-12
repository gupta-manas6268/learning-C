#include <stdio.h>
// It is on page "50" of "C notes".

// void display(int arr[][], int a, int b){  // This line shows error because we have to give size of any one thing 'column'. 
// void display(int arr[100][], int a, int b){  // This line shows error because we have to give size of any one thing 'column'. 
void display(int arr[][100], int a, int b){  // We can put here anything instead of '100' like '10000000000'.
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            // printf("The value of arr[%d][%d] is: %d", i, j, arr[i][j]); // This line shows error because there is no '\n' after '%d' of 'arr[i][j]'.
            printf("The value of arr[%d][%d] is: %d\n", i, j, arr[i][j]);  // By adding '\n' we ensure that each line is printed on a new line. 
        }
    }
}
int main(){
    int a, b; 
    printf("The value of 'i' and 'j' are \n");
    scanf("%d %d", &a, &b);

    int arr[a][b];
    for(int i=0; i<a; i++){
        for(int j=0; j<b; j++){
            printf("The value of arr[%d][%d] is: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr, a, b);

    return 0;
}