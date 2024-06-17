// 

// C - Factors of Factorial
// https://atcoder.jp/contests/abc052/tasks/arc067_a



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int fact(int n){
    int ans = 1;
    for(int i=1; i<=n; i++){
        ans *= i;
    }

    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    int ans = fact(n) % MOD;
    cout << ans << endl;
}