// Wrong.

// Static Range Sum Queries
// https://cses.fi/problemset/task/1646







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

    int n, q; cin >> n >> q;
    int arr[n];
    for(int i=0; i<n; i++){ cin >> arr[i];}
    vector<pair<int, int>> query(n);
    for(int i=0; i<q; i++){
        int a, b; cin >> a >> b;
        query[i].first = a;
        query[i].second = b;
    }

    vector<int> prefix_Sum(n+1);
    prefix_Sum[0] = 0;
    for(int i=1; i<=n; i++){
        prefix_Sum[i] = (arr[i-1] + prefix_Sum[i-1]);
    }

    vector<int> ans(q);
    for(int i=0; i<q; i++){
        ans[i] = (prefix_Sum[query[i].second] - prefix_Sum[query[i].first - 1]);
    }

    for(int i=0; i<q; i++){ cout << ans[i] << endl;}
}