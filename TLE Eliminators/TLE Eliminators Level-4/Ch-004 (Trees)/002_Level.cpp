// Q.1: Find the level of each node assuming level of root = 0 ?


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Level(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& level){
    if(parent == -1){
        level[current_Node] = 0; 
    }
    else{
        level[current_Node] = level[parent] + 1;
    }

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            Level(neighour, adjacency_List, current_Node, level);
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
    vector<int> level(n+1, -1); // 1-based indexing.
    Level(root, Adjacency_List, -1, level);

    // O/P
    for(int i=1; i <= n; i++){
        cout << level[i] << endl;
    }
    cout << endl;

    // TC = O(n).
    // SC = O(n).
}