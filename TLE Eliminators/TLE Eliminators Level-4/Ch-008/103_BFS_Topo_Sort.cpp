#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Topo Sort using BFS (Kahn's Algo.)
vector<int> kahns_algo(vector<vector<int>>& adj){
    int n = adj.size();
    vector<int> in_Degree(n, 0);
    for(int u=0; u < n; u++){
        for(int v : adj[u]){ in_Degree[v]++;}
    }
    queue<int> q;
    for(int u=0; u < n; u++){
        if(in_Degree[u] == 0){ q.push(u);}
    }
    if(q.empty()){ return {-1};} // If Graph has cycle.

    vector<int> topo;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        topo.push_back(u);
        for(int v : adj[u]){
            in_Degree[v]--;
            if(in_Degree[v] == 0){ q.push(v);}
        }
    }

    return topo;
    // TC = O(V + E) = O(n + m)
    // SC = O(V) = O(n)
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}