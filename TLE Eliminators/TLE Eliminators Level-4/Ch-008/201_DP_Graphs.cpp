// Quiz: Find the heaviest path from a given source in a 
//       weighted DAG. (The weight of a path is defined as 
//  sum of weights of all edges on the path.)




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
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

int heaviest_path(vector<vector<pair<int,int>>>& adj){
    int n = adj.size()-1;
    vector<int> topo = get_Topo_Sort(adj);
    vector<int> dp(n+1, 0);
    for(int i=n; i >= 1; i--){
        int u = topo[i];
        for(auto Pair : adj[u]){
            int v = Pair.first, weight = Pair.second; 
            dp[u] = max(dp[u], dp[v] + weight);
        }
    }

    return *max_element(dp.begin(), dp.end());
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0; i < m; i++){
        int u, v, weight; cin >> u >> v >> weight;
        adj[u].push_back({v, weight});
    }

    // O/P
    cout << heaviest_path(adj);
}