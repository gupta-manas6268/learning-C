// Correct.
// This is fully My code.  

// (No need to write code & logic.)

// Message Route
// https://cses.fi/problemset/task/1667



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


// Use BFS to find min. Distance
//  Store Parent for each node to Backtrack from 'n'
//  to '1' to find the Path also.
vector<int> Parent(1e5+10, -1);
void BFS(int node, vector<vector<int>>& adj_List_1){ // O(n + m)
    vector<int> visited(adj_List_1.size());
    queue<int> q;
    q.push(node); visited[node] = 1;
    
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        for(auto &v : adj_List_1[u]){
            if(visited[v] == 0){
                Parent[v] = u;
                visited[v] = 1;
                q.push(v);
            }
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
    for(int i=1; i <= m; i++){
        int u, v; cin >> u >> v;
        adj_List_1[u].push_back(v);
        adj_List_1[v].push_back(u);
    }
    
    // Solution
    Parent[1] = 0;
    BFS(1, adj_List_1);

    int length = 0;
    vector<int> ans;
    if(Parent[n] != -1){
        int i = n;
        while(Parent[i] != -1){
            length++;
            ans.push_back(i);
            i = Parent[i];
        }
        reverse(ans.begin(), ans.end());
    }

    // O/P
    if(length != 0){
        cout << length << endl;
        for(int i=0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else{ cout << "IMPOSSIBLE" << endl;}
}