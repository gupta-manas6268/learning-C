// Correct.

// C - Peaks 
// https://atcoder.jp/contests/abc166/tasks/abc166_c




































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
    vector<int> H(n+1);
    for(int i=1; i <= n; i++){ cin >> H[i];}
    
    vector<vector<int>> adj_List_1(n+1); 
    for(int i=0; i < m; i++){
        int a, b; cin >> a >> b;

        adj_List_1[a].push_back(b);
        adj_List_1[b].push_back(a);
    }

    // Solution
    int ans = 0;
    for(int i=1; i <= n; i++){
        bool is_Higher = true;
        for(int j=0; j < adj_List_1[i].size(); j++){
            int node = adj_List_1[i][j];
            if(H[i] <= H[node]){ 
                is_Higher = false; break;
            }
        }
        if(is_Higher == true){ ans++;}
    }

    // O/P
    cout << ans << endl;
}