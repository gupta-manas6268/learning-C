#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& ans){
    ans.push_back(current_Node); 
    for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
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
    vector<vector<int>> Adjacency_List(n+1);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

        Adjacency_List[u].push_back(v); // Both lines convert Uni-directional
        Adjacency_List[v].push_back(u); // edges in tree to bi-directional &
                        // stored in 1-based indexing.
    }

    // Solution
    int root = 1;
    vector<int> DFS_traversal; // 0-based indexing.
    DFS(root, Adjacency_List, -1, DFS_traversal);

    // O/P
    for(int i=0; i < n; i++){
        cout << DFS_traversal[i] << endl;
    }
    cout << endl;

    // TC = O(n).
    // SC = O(n).
}