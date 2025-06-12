// Correct.

// A. Raising Bacteria
// https://codeforces.com/problemset/problem/579/A


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int Sum(int a){
    int ans = 0;
    while(a > 0){
        ans += (a % 2);
        a /= 2;
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int x; cin >> x;
    cout << Sum(x) << endl;
}