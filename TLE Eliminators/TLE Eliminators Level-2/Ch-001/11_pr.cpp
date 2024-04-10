// Correct.

// J. Factorial
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J














#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int factorial(int n){
    if(n == 0){
        return 1;
    }
    if(n == 1){
        return 1;
    }
    else{
        return factorial(n-1) * n;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    cout << factorial(n) << endl;
}