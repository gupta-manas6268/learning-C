// Q.3: Create an array of "3 x 10" containing multiplication tables 
//       of the numbers "x, y, z" respectively.
//       ("x, y & z" are input from the user.)



















#include <stdio.h>

int main(){
    int n; scanf("%d", &n);
    int arr[n][10];

    int array[n];

    for(int i=0; i<n; i++){
        scanf("%d", &array[i]);
    }
    for(int i=0; i<n; i++){
        printf("The multiplication table of %d is given below:\n", array[i]);

        for(int j=0; j<10; j++){
            int k = array[i];
            int ans = k * (j + 1); 
            printf("%d ", ans);
            
            if(j == 9){
                printf("\n\n");
            }
        }
    }
    return 0;
}