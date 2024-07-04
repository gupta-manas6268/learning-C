// Correct.

// A. Extremely Round
// https://codeforces.com/problemset/problem/1766/A
































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    for(int i=1; i <= b; i++){
        ans *= a;
    }
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        int ans = 0;
        for(int i=0; i<7; i++){
            if((n >= power(10,i) && (n < power(10,i+1)))){
                ans += (9 * i);
                ans += (n / power(10,i));
            }
        }

        cout << ans << endl;
    }
}