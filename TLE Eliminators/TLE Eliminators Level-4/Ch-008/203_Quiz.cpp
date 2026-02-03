// Correct.
// (This is Mentor's code.)

// Coin Collector
// https://cses.fi/problemset/task/1686



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> get_Topo_Sort(vector<vector<pair<int,int>>>& adj){
    int n = adj.size()-1;
    vector<int> visited(n+1, 0), topo;
    auto dfs = [&](auto &&dfs, int u) -> void {
        visited[u] = 1;
        for(auto Pair : adj[u]){
            int v = Pair.first, weight = Pair.second;
            if(!visited[v]){ dfs(dfs, v);}
        }
        topo.push_back(u);
    };
    for(int u = 1; u <= n; u++){
        if(!visited[u]){ dfs(dfs, u);}
    }
    reverse(topo.begin(), topo.end());
    
    return topo;
}

void kosaraju(vector<vector<int>>& adj, vector<vector<int>>& components, vector<vector<int>>& adj_cond){
    int n = adj.size()-1;

    // Getting the order of vertices in decreasing(↓) order of their finishing.
    vector<int> visited(n+1, 0), order;
    auto dfs = [&](auto &&dfs, int u) -> void {
        visited[u] = 1;
        for(int v : adj[u]){
            if(!visited[v]){ dfs(dfs, v);}
        }
        order.push_back(u);
    };
    for(int u=1; u <= n; u++){
        if(!visited[u]){ dfs(dfs, u);}
    }

    fill(visited.begin(), visited.end(), 0);
    reverse(order.begin(), order.end());

    // Getting the transpose of the graph.
    vector<vector<int>> adj_rev(n+1); // adj_rev => adj_reversed
    for(int u=1; u <= n; u++){
        for(int v : adj[u]){ adj_rev[v].push_back(u);}
    }

    auto dfs_rev = [&](auto &&dfs_rev, int u) -> void {
        visited[u] = 1;
        components.back().push_back(u);
        for(int v : adj_rev[u]){
            if(!visited[v]){ dfs_rev(dfs_rev, v);}
        }
    };

    vector<int> roots(n+1);
    // Getting the strongly connected components.
    for(int u : order){
        if(visited[u]){ continue;}
        components.push_back({});
        dfs_rev(dfs_rev, u);
        vector<int> &component = components.back();
        int root = *min_element(component.begin(), component.end());
        for(int v : component){ roots[v] = root;}
    }

    // Getting the condensed graph.
    adj_cond.resize(n+1);
    for(int u=1; u <= n; u++){
        for(int v : adj[u]){
            if(roots[u] != roots[v]){ adj_cond[roots[u]].push_back(roots[v]);}
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<int> a(n+1);
    for(int i=1; i <= n; i++){ cin >> a[i];}
    vector<vector<int>> adj(n+1);
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
    }

    // Solution
    vector<vector<int>> components, adj_cond;
    kosaraju(adj, components, adj_cond);
    
    vector<int> vals(n+1, 0);
    for(auto &component : components){
        int root = *min_element(component.begin(), component.end());
        for(int u : component){ vals[root] += a[u];}
    }

    vector<int> dp(n+1, -1);
    auto dfs = [&](auto &&dfs, int u) -> void {
        if(dp[u] != -1){ return;}
        dp[u] = vals[u];
        for(int v : adj_cond[u]){
            dfs(dfs, v);
            dp[u] = max(dp[u], vals[u] + dp[v]);
        }
    };
    for(int i=1; i <= n; i++){ dfs(dfs, i);}

    // O/P
    cout << *max_element(dp.begin(), dp.end()) << endl;
}