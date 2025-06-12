// Q.5: Write a C-function that receives 5 integers and returns the sum,
//       average and standard deviation of these numbers. Call this function
//       from main( ) and print the results in main( ).


// Also solve this Question by using Arrays.















#include <stdio.h>
#include <math.h>

int power(int a, int b){
    int ans = 1;
    for(int i=b; i>=1; i--){ ans *= a;}

    return ans;
}

void function(int n, int arr[n], int *sum, float *avg, float *stanDev){

    *sum = 0;

    for(int i=0; i<n; i++){
        *sum += arr[i];
    }

    *avg = (float)(*sum)/ n;

    float sumOfSquares = 0;

    for(int i=0; i<n; i++){
        sumOfSquares += power((arr[i] - *avg), 2);
    }

    *stanDev = sqrt(sumOfSquares/ n);
}

int main(){
    int n; scanf("%d", &n);

    int arr[n]; 

    for(int i=0; i<n; i++){ scanf("%d", &arr[i]);}

    int sum;
    float avg, stanDev;

    function(n, arr, &sum, &avg, &stanDev);

    printf("%d %f %f", sum, avg, stanDev);

    return 0;
}