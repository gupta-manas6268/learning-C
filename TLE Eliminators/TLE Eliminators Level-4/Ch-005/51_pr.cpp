// Correct.

// F. Tree with Maximum Cost
// https://codeforces.com/problemset/problem/1092/F




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int N = 2e5+1;
vector<int> a(N);
vector<vector<int>> adjacency_List(N);
void dfs(int node, int parent, vector<int>& prefix_Cost, vector<int>& subtree_Cost){
    prefix_Cost[node] += a[node];
    for(auto &i : adjacency_List[node]){
        if(i != parent){
            dfs(i, node, prefix_Cost, subtree_Cost);
            prefix_Cost[node] += prefix_Cost[i];
            subtree_Cost[node] += (subtree_Cost[i] + prefix_Cost[i]);
        }
    }
};

void re_Root(int node, int parent, int ans, vector<int>& prefix_Cost, vector<int>& DP){
    DP[node] = ans;
    for(auto &i : adjacency_List[node]){
        if(i != parent){
            re_Root(i, node, DP[node] + prefix_Cost[1] - (2 * prefix_Cost[i]), prefix_Cost, DP);
            // dp[new_root] = dp[parent] - prefix_Cost[new_root] + (prefix_Cost[1] - prefix_Cost[new_root])
            //    (sz => subtree_Size)
        }
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    // I/P
    int n; cin >> n;
    for(int i=1; i <= n; i++){ cin >> a[i];}
    for(int i=1; i < n; i++){
        int x, y; cin >> x >> y;
        adjacency_List[x].push_back(y);
        adjacency_List[y].push_back(x);
    }
    
    // Solution
    vector<int> prefix_Cost(n+1, 0), subtree_Cost(n+1, 0);
    dfs(1, 0, prefix_Cost, subtree_Cost);
    
    vector<int> DP(n+1);
    re_Root(1, 0, subtree_Cost[1], prefix_Cost, DP);

    // O/P
    int ans = 0;
    for(int i=1; i <= n; i++){ ans = max(DP[i], ans);} 
    cout << ans << endl;
    // TC = O(n)
    // SC = O(n)
}