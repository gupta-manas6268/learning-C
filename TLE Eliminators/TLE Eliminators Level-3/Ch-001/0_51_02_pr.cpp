// Correct.
// This is Mentor's code.

// C. A Tale of Two Lands
// https://codeforces.com/problemset/problem/1166/C



































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
    vector<int> a(n);
    for(auto &it:a){
        cin >> it;
        it = abs(it);
    }
    sort(a.begin(), a.end());

    int ans = 0;
    for(int i=0; i<n; i++){
        auto itr = upper_bound(a.begin(), a.end(), 2*a[i]);
        itr--;
        ans += (itr - a.begin() - i);
    }

    cout << ans << endl;
}