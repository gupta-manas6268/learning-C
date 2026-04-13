// Correct.

// C. Pocket Book
// https://codeforces.com/problemset/problem/152/C




































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

    // I/P
    int n, m; cin >> n >> m;
    vector<string> vec(n);
    for(int i=0; i < n; i++){ cin >> vec[i];}

    // Solution
    vector<int> different_char(m);
    for(int i=0; i < m; i++){
        set<char> s;
        for(int j=0; j < n; j++){
            s.insert(vec[j][i]);
        }
        different_char[i] = s.size();
    }
    int ans = 1;
    for(int i=0; i < m; i++){
        ans *= different_char[i];
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
}