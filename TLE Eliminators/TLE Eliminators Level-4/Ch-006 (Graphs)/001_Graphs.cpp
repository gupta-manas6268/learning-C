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

    // Methods to store Simple-Graphs are:
    int n, m; cin >> n >> m;

    // 1. Adjacency Matrix
    vector<vector<int>> adj_Matrix(n, vector<int>(n)); // adj_Matrix => adjacency_Matrix

    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        adj_Matrix[u][v] = adj_Matrix[v][u] = 1;
    }

    // 2. Adjacency List (Vector)
    vector<vector<int>> adj_List_1(n);
    
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        adj_List_1[u].push_back(v);
        adj_List_1[v].push_back(u);
    }

    // 3. Adjacency List (Set)
    vector<set<int>> adj_List_2(n);

    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        adj_List_2[u].insert(v);
        adj_List_2[v].insert(u);
    }
}