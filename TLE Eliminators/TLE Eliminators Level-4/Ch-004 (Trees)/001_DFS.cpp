#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& ans){
    ans.push_back(current_Node);
    for(int neighbour : adjacency_List[current_Node]){
        if(neighbour != parent){
            DFS(neighbour, adjacency_List, current_Node, ans);
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
    int n; cin >> n;
    vector<vector<int>> Adjacency_List(n);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.
        u--; v--; // Converting 'u' & 'v' to 0-based indexing for 
                  //  adding them in Vector.
        Adjacency_List[u].push_back(v);
        Adjacency_List[v].push_back(u);
    }

    // Solution
    int root = 0;
    vector<int> DFS_traversal;
    DFS(root, Adjacency_List, -1, DFS_traversal);
}