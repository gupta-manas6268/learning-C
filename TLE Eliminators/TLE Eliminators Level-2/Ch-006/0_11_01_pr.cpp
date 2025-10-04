// Correct.
// (This is My code in 2nd-time.)

// M. Minimum LCM
// https://codeforces.com/contest/1765/problem/M



































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
        // I/P
        int n; cin >> n;

        // Solution
        int a = 1, b = n-1;
        for(int i=2; i*i <= n; i++){
            if((n%i) == 0){
                a = (n/i);
                b = (n/i)*(i-1);
                break;
            }
        }

        // O/P
        cout << a << " " << b << endl;
    }
}