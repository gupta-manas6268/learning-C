// Correct.

// B. Print from 1 to N
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Note: (Recursion are also of 'void' data-type.)
void print(int n){
    if(n >= 1){
        print(n-1);
        cout << n << endl;
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    print(n);
}