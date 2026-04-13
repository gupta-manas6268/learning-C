// Correct.

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

    // I/P
    int n, q; cin >> n >> q;
    vector<int> x(n);
    for(int i=0; i < n; i++){ cin >> x[i];}

    // Solution
    vector<int> Prefix_Sum(n);
    for(int i=0; i < n; i++){
        if(i == 0){
            Prefix_Sum[i] = x[i];
        }
        else{
            Prefix_Sum[i] = (Prefix_Sum[i-1] + x[i]);
        }
    }
    for(int i=0; i < q; i++){
        int a, b; cin >> a >> b;

        a--; b--;
        int ans;
        if((a-1) >= 0){
            ans = (Prefix_Sum[b] - Prefix_Sum[a-1]);
        }
        else{
            ans = Prefix_Sum[b];
        }

        // O/P
        cout << ans << endl;
    }
}