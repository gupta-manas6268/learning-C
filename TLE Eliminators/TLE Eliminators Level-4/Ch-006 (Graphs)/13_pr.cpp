// Correct.

// Building Roads
// https://cses.fi/problemset/task/1666




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dfs;
void DFS(int node, vector<vector<int>>& adj_List_1, vector<int>& visited){ // O(n)
    visited[node] = 1;
    dfs.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, visited);
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
    vector<vector<int>> adj_List_1(n+1);
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;

        adj_List_1[u].push_back(v);
        adj_List_1[v].push_back(u);
    }

    // Solution
    vector<int> Visited(n+1);
    for(int i=1; i <= n; i++){
        Visited[i] = 0;
    }

    vector<vector<int>> All_Components;
    for(int i=1; i <= n; i++){
        if(Visited[i] == 0){
            DFS(i, adj_List_1, Visited);
            All_Components.push_back(dfs);
            dfs.clear();
        }
    }

    // O/P
    int k = (All_Components.size() - 1);
    vector<pair<int,int>> Ans;
    for(int i=1; i <= k; i++){
        Ans.push_back({All_Components[i-1][0], All_Components[i][0]});
    }
    
    cout << k << endl;
    for(int i=0; i < Ans.size(); i++){
        cout << Ans[i].first << " " << Ans[i].second << endl;
    }
}