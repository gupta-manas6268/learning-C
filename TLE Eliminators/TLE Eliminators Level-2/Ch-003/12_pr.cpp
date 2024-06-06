// A. Raising Bacteria 
// https://codeforces.com/problemset/problem/579/A


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int x; cin >> x;
    int digit = log2(x) + 1;
    int ans = 0;
    for(int i=0; i<digit; i++){
        int a = x & (1 << i);
        ans += a;
    }
    cout << (ans) << endl;
}