// Correct.

// L. Summation
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/L


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int summation(int *arr, int n, int i){
    if(i == n){
        return 0;
    }
    if(i != n){
        return arr[i] + summation(arr, n, i+1);
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << summation(arr, n, 0) << endl;
}