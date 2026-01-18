// Correct.
// (This is My code in 2nd-time.)

// (Write logic & Formula. But don't write code.)

// B. Mahmoud and Ehab and the bipartiteness
// https://codeforces.com/problemset/problem/862/b

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
pair<int,int> BFS(int node, vector<vector<int>>& adj_List_1, int n){ // O(n + m)
    vector<int> ans(n+1);
    vector<int> visited(adj_List_1.size());
    queue<pair<int,int>> q;
    q.push({node, 0}); visited[node] = 1;
    
    while(!q.empty()){
        pair<int,int> u = q.front();
        q.pop();
        
        ans[u.first] = u.second;
        for(auto &v : adj_List_1[u.first]){
            if(visited[v] == 0){
                visited[v] = 1;
                if(u.second == 0){ q.push({v, 1});}
                else{ q.push({v, 0});}
            }
        }
    }

    int x = 0, y = 0;
    for(int i=1; i <= n; i++){
        if(ans[i] == 0){ x++;}
        else{ y++;}
    }

    pair<int,int> Final_ans = {x, y};
    return Final_ans;
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

    // I/P
    int n; cin >> n;
    vector<vector<int>> adj(n+1);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }    
    
    // O/P
    int ans = 0;
    if(n >= 2){
        pair<int,int> X_Y = BFS(1, adj, n);
        int x = X_Y.first, y = X_Y.second;
        ans = ((x*y) - (n-1));
    }
    cout << ans << endl;
}