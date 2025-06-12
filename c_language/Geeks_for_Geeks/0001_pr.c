// Subarray with given sum.

// https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1


















#include <stdio.h>

int main(){
    int n, Sum; scanf("%d %d", &n, &Sum);

    int a[n];
    for(int i=0; i<n; i++){ scanf("%d", &a[i]);}

    int left=0;
    int right;

    int small_sum = 0;

    for(int i=0; i<n; i++){
        small_sum += a[i];

        if(small_sum > Sum){
            small_sum -= a[left];

            left++;
        }
        else if(small_sum == Sum){ right = i;}
    }

    printf("%d %d", left+1, right+1);

    return 0;
}