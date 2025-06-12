// This is Mentor's code.
// Correct.

// D - Lazy Faith
// https://atcoder.jp/contests/abc119/tasks/abc119_d



































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

    long long a, b, q; cin >> a >> b >> q;
    vector<long long> s(a + 2), t(b + 2);
    for(long long i=1; i <= a; i++){ 
        cin >> s[i];
    }
    for(long long i=1; i <= b; i++){
        cin >> t[i];
    }

    s[0] = t[0] = -1e18;        // These two lines are just 
    s[a + 1] = t[b + 1] = 1e18; //  assuming.

    while(q--){
        long long x; cin >> x;

        long long ans = 1e18;

        long long left_shrine = *(--upper_bound(s.begin(), s.end(), x));
        long long left_temple = *(--upper_bound(t.begin(), t.end(), x));
        long long right_shrine = *lower_bound(s.begin(), s.end(), x);
        long long right_temple = *lower_bound(t.begin(),t.end(), x);

        // Left shrine, Left temple
        ans = min(ans, x - min(left_shrine, left_temple));

        // Left shrine, Right temple
        ans = min(ans, right_temple - left_shrine + min(x - left_shrine, right_temple - x));

        // Right shrine, Left temple
        ans = min(ans, right_shrine - left_temple + min(right_shrine - x, x - left_temple));

        // Right shrine, Right temple
        ans = min(ans, max(right_shrine, right_temple) - x);

        cout << ans << endl;

        // n => a, b

        // TC = O(q * log(n)).
        // SC = O(n).
    }
}