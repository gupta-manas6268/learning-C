// Correct.

// B - 3-smooth Numbers
// https://atcoder.jp/contests/abc324/tasks/abc324_b








































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    while((n % 2) == 0){
        n /= 2;
    }
    while((n % 3) == 0){
        n /= 3;
    }

    if(n > 1){ cout << "No" << endl;}
    else{ cout << "Yes" << endl;}
}