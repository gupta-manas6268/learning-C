#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Topo Sort using DFS
void DFS(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans){
    visited[node] = true;
    for(int v : adj[node]){
        if(!visited[v]){ DFS(v, adj, visited, ans);}
    }
    ans.push_back(node);
}

void topological_Sort(int n, vector<vector<int>>& adj, vector<bool>& visited, vector<int>& ans){
    for(int i=1; i <= n; i++){
        if(!visited[i]){ DFS(i, adj, visited, ans);}
    }
    reverse(ans.begin(), ans.end());
    // TC = O(n)
    // SC = O(n)
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}