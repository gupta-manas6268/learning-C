// Correct.

// A. Hongcow Builds A Nation
// https://codeforces.com/problemset/problem/744/A




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int node, vector<vector<int>>& adj_List_1, vector<int>& visited, vector<int>& ans){ // O(n+m)
    visited[node] = 1;
    ans.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, visited, ans);
        }
    }
    // TC = O(n+m)
    // SC = O(n)
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m, k; cin >> n >> m >> k;
    vector<int> c(k);
    for(int i=0; i < k; i++){ cin >> c[i];}
    vector<vector<int>> adj(n+1);
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Solution
    vector<int> visited(n+1, 0);
    vector<pair<int,int>> Edge_Vertices;
    int govt_Edges = 0, govt_Vertices = 0;
    for(int i=0; i < k; i++){
        vector<int> Path;
        DFS(c[i], adj, visited, Path);

        int num_Edges = 0, num_Vertices = Path.size();
        for(int j=0; j < Path.size(); j++){
            int node = Path[j]; 
            num_Edges += (adj[node].size());
        }
        num_Edges /= 2; 
        Edge_Vertices.push_back({num_Edges, num_Vertices});
        govt_Edges += num_Edges;
        govt_Vertices += num_Vertices;
    }

    Edge_Vertices.push_back({m-govt_Edges, n-govt_Vertices});

    int ans = 0;
    for(int i=0; i <= k; i++){
        int edge = Edge_Vertices[i].first;
        int vertices = Edge_Vertices[i].second;
        ans += (((vertices * (vertices-1))/ 2) - edge);
    }
    
    int temp_ans = 0;
    int vertices_2 = Edge_Vertices[k].second;
    int temp_2 = ((vertices_2 * (vertices_2-1))/ 2);
    for(int i=0; i < k; i++){
        int vertices_1 = Edge_Vertices[i].second;
        int temp_1 = ((vertices_1 * (vertices_1-1))/ 2);

        int vertices = (vertices_1 + vertices_2);
        int temp = ((vertices * (vertices-1))/ 2);
        temp_ans = max(temp_ans, temp - (temp_1 + temp_2));
    }
    ans += temp_ans;

    // O/P
    cout << ans << endl;
}