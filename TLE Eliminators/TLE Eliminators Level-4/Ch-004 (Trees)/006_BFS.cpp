#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void BFS(int root, vector<vector<int>>& adjacency_List, vector<int>& ans){
    int n = (adjacency_List.size() + 1);

    queue<int> qu;
    vector<bool> visited(n, false);
    qu.push(root);
    visited[root] = true;
    while(!(qu.empty())){
        int current_Node = qu.front();
        qu.pop();
        ans.push_back(current_Node);
        for(int neighour : adjacency_List[current_Node]){
            if(!visited[neighour]){
                visited[neighour] = true;
                qu.push(neighour);
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
    vector<int> BFS_traversal; // 0-based indexing.
    BFS(root, Adjacency_List, BFS_traversal);

    // O/P
    for(int i=0; i < n; i++){
        cout << BFS_traversal[i] << endl;
    }
    cout << endl;

    // TC = O(n).
    // SC = O(n).
}