// 
// (This is Mentor's code. Correct this code by Chat-GPT
//   & then run.)

// E. Ralph and Mushrooms
// https://codeforces.com/problemset/problem/894/E



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
tuple<vector<vector<int>>, vector<vector<pair<int, int>>>, vector<int>>
kosaraju(vector<vector<pair<int, int>>>& adj){
    constexpr int obi = 1; // 1-based indexing
    int n = (adj.size() - obi);

    // Getting the order of vertices in decreasing(↓) order of their
    //  finishing time.
    vector<int> vis(n + obi, 0), order; // vis => visited
    auto dfs = [&](auto &&dfs, int u) -> void {
        vis[u] = 1;
        for(auto [v, wt] : adj[u]){ // wt => weight
            if(!vis[v]){ dfs(dfs, v);}
        }
        order.push_back(u);
    };
    for(int u = obi; u < (n + obi); u++){
        if(!vis[u]){ dfs(dfs, u);}
    }

    fill(vis.begin(), vis.end(), 0);
    reverse(order.begin(), order.end());

    // Getting the transpose of the graph.
    vector<vector<int>> adj_rev(n + obi); // adj_rev => adj_reverse
    for(int u = obi; u < (n + obi); u++){
        for(auto [v, wt] : adj[u]){ adj_rev[v].push_back(u);}
    }
    vector<vector<int>> components;

    auto dfs_rev = [&](auto &&dfs_rev, int u) -> void {
        vis[u] = 1;
        components.back().push_back(u);
        for(int v : adj_rev[u]){
            if(!vis[v]){ dfs_rev(dfs_rev, v);}
        }
    };

    vector<int> roots(n + obi);

    // Getting the Strongly Connected Components(SCC).
    for(int u : order){
        if(vis[u]){ continue;}
        components.push_back({});
        dfs_rev(dfs_rev, u);
        vector<int>& component = components.back();
        int root = component[0];
        for(int v : component){ roots[v] = root;}
    }

    // Getting the Condensed Graph.
    vector<vector<pair<int, int>>> adj_cond(n + obi);
    for(int u = obi; u < (n + obi); u++){
        for(auto [v, wt] : adj[u]){
            if(roots[u] != roots[v]){ adj_cond[roots[u]].push_back({roots[v], wt});}
        }
    }

    return {components, adj_cond, roots};
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<vector<pair<int, int>>> adj(n+1);
    for(int i=0; i < m; i++){
        int u, v, weight; cin >> u >> v >> weight;
        adj[u].push_back({v, weight});
    }
    int source; cin >> source;

    // Solution
    auto [components, adj_cond, roots] = kosaraju(adj);
    vector<int> val(n+1, 0);

    set<pair<int, int>> natural_sum;
    for(int i=0; i <= 1e5; i++){ natural_sum.insert({(i * (i+1))/ 2, i})};

    // x, x-1, x-3, x-6, x-10, x - (((i-1) * i)/ 2)
    // k = smallest value of 'i' s.t. ((i * (i+1))/ 2) >= x
    // 
    // (x-0) + (x-1) + (x-3) + (x-6) + .... + (x - ((k * (k+1))/ 2))
    // k * x - (1)

    // sum_N(i) = 1 + 2 + 3 + .... + i
    // sum_N(0) + sum_N(1) + sum_N(2) + .... + sum_N(k-1) = ((k-1) * k * (k+1))/ 6

    // sum of sum_N(i) for all 0 <= i <= k-1
    // sum of ((i * (i+1))/ 2) for all 0 <= i <= k-1

    // (sum of i^2 + i for all 0 <= i <= k-1)/ 2

    for(auto &component : components){
        int root = component[0];
        for(int u : component){
            for(auto [v, weight] : adj[u]){
                if(roots[v] != roots[u]){ continue;}
                int k = natural_sum.lower_bound({weight, 0})->second;
                int curr = 1LL * k * weight - 1LL * (k-1) * k * (k+1) / 6;
                val[root] += curr;
            }
        }
    }

    vector<int> dp(n+1, -1);
    auto dfs = [&](auto &&dfs, int u) -> void {
        if(dp[u] != -1){ return;}
        dp[u] = val[u];
        for(auto [v, weight] : adj_cond[u]){
            dfs(dfs, v);
            dp[u] = max(dp[u], val[u] + dp[v] + weight);
        }
    };
    source = roots[source];
    dfs(dfs, source);

    // O/P
    cout << dp[source] << endl;
}