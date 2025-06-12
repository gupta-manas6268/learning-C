// Correct.

// A. Ambitious Kid
// https://codeforces.com/problemset/problem/1866/A



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int mod(int a){
    if(a >= 0){ return a;}
    else{ return -a;}
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}

    int modMin = mod(arr[0]);
    for(int i=0; i<n; i++){
        if(mod(arr[i]) < modMin){
            modMin = mod(arr[i]);
        }
    }

    cout << modMin << endl;
}