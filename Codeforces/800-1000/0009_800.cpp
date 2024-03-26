// Correct.

// A. Jagged Swaps
// https://codeforces.com/problemset/problem/1896/A


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int minimum(int *arr, int n){
    int Min = arr[0];

    for(int i=0; i<n; i++){
        if(Min > arr[i]){ Min = arr[i];}
    }
    return Min;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        int arr[n];
        for(int i=0; i<n; i++){ cin >> arr[i];}

        int Min = minimum(arr, n);
        if(arr[0] == Min){ cout << "Yes" << endl;}
        else{ cout << "No" << endl;}
    }
}