// Q.2: Find the parent of each node assuming parent of root = -1 ?


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Parents(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& parents){
    parents[current_Node] = parent; 

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            Parents(neighour, adjacency_List, current_Node, parents);
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

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }

    // Solution
    int root = 1;
    vector<int> parents(n+1, -1); // 1-based indexing.
    Parents(root, Adjacency_List, -1, parents);

    // O/P
    for(int i=1; i <= n; i++){
        cout << parents[i] << endl;
    }
    cout << endl;
}