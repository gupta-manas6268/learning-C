#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void BFS(int node, vector<vector<int>>& adj_List_1, vector<int>& ans){ // O(n + m)
    // BFS => Stores in order of min. distance of node from starting node.
    vector<int> visited(adj_List_1.size());
    queue<int> q;
    q.push(node); visited[node] = 1;
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        ans.push_back(u);
        for(auto &v : adj_List_1[u]){
            if(visited[v] == 0){
                visited[v] == 1;
                q.push(v);
            }
        }
    }
    // TC = O(n + m)
    // SC = O(n)
    //      (n => no. of nodes, m => no. of edges (max.(m) = n*(n-1) ))
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}