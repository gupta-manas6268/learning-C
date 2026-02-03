// From [01:34:00] of Lecture-03.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void kosaraju(vector<vector<int>>& adj, vector<vector<int>>& components, vector<vector<int>>& adj_cond){
    int n = adj.size()-1;

    // Getting the order of vertices in decreasing(↓) order of their finishing.
    vector<int> visited(n+1, 0), order;
    auto dfs = [&](auto &&dfs, int u) -> void {
        visited[u] = 1;
        for(int v : adj[u]){
            if(!visited[u]){ dfs(dfs, v);}
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
            if(!visited[u]){ dfs_rev(dfs_rev, v);}
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

    
}