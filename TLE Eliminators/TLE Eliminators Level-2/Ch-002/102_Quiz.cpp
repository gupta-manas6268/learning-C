// Correct.

// F. Print Even Indices
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/F


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void helper(int i, int n, vector<int> &a){
    if(i == n) return;
    helper(i+1, n, a);
    if(i%2 == 0){ cout << a[i] << " ";}
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    helper(0, n, a);
}