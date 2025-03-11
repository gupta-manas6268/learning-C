// 

// Reading Books
// https://cses.fi/problemset/task/1631



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
    int n; cin >> n;
    vector<long long> t(n);
    for(int i=0; i<n; i++){ cin >> t[i];}

    // Solution
    sort(t.begin(), t.end());
    vector<long long> prefix_Sum;
    long long Prefix = 0;
    for(int i=0; i<n; i++){
        Prefix += t[i];
        prefix_Sum.push_back(Prefix);
    }

    long long val = (Prefix / 2);
    int index = upper_bound(prefix_Sum.begin(), prefix_Sum.end(), val) - prefix_Sum.begin();
    long long Extra = abs(Prefix - (2 * prefix_Sum[index-1]));

    // O/P
    int ans = (Prefix + Extra);
    cout << ans << endl;
}