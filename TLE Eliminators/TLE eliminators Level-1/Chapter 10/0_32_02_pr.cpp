// This is Mentor's code.
// Correct.

// B. Aleksa and Stack
// https://codeforces.com/contest/1878/problem/B

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        for(int i=1; i <= n; i++){
            cout << (2*i -1) << " ";
        }
        cout << endl;

        // here, a[i], a[i+1], a[i+2] all are odd.
        //  So, a[i] + a[i+1] = even.
        //  and (3 * a[i+2]) => odd.
        //  i.e. odd is never divisible by even.
    }
}