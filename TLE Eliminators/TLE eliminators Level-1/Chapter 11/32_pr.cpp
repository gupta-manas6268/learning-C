// Correct.

// O. Fibonacci
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/O


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


int fibonacci(int n){
    if(n == 1){
        return 0;
    }
    else if(n == 2){
        return 1;
    }
    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    cout << fibonacci(n) << endl;
}