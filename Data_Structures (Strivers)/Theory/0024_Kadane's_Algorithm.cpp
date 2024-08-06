// Take Screenshots by fastly seeing the Lecture.





#include<bits/stdc++.h>
using namespace std;

long long maxSubarraySum(int arr[], int n){
    long long sum = 0, maxi = LONG_MIN;
    for(int i=0; i<n; i++){
        sum += arr[i];

        if(sum > maxi){
            maxi = sum;
        }

        if(sum < 0){
            sum = 0;
        }
    }

    return maxi;

    // TC = O(n).
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}