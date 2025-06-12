// Correct.

// Weird Algorithm
// https://cses.fi/problemset/task/1068


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void sequence(int n){
    cout << n << " ";
    if(n != 1){
        if(n%2 != 0){
            sequence(3*n + 1);
        }
        else{
            sequence(n/2);
        }
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    sequence(n);
}