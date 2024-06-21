// Correct.

// A. Remove a Progression
// https://codeforces.com/contest/1194/problem/A



















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

    int tc; cin >> tc;

    while (tc--){
        int n, x; cin >> n >> x;

        int ans;
        if(n%2 == 0){ ans = (2 * x);}
        else{
            if(x == (n/2 + 1)){ ans = n;}
            else{ ans = (2 * x);}
        }

        cout << ans << endl;
    }
}