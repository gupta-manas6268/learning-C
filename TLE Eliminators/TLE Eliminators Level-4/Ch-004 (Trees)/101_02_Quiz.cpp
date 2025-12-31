// Correct.
// This is My 2nd time code. So, no need to 
//  write code & logic.

// C. Kuro and Walking Route
// https://codeforces.com/contest/979/problem/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& parents, vector<int>& subtree_Size){
    parents[current_Node] = parent; 
    subtree_Size[current_Node] = 1; // 1-based indexing.

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            DFS(neighour, adjacency_List, current_Node, parents, subtree_Size);
            subtree_Size[current_Node] += subtree_Size[neighour];
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
    int n, x, y; cin >> n >> x >> y;
    vector<vector<int>> Adjacency_List(n+1);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        Adjacency_List[u].push_back(v);
        Adjacency_List[v].push_back(u);
    }

    // Solution
    int root = x;
    vector<int> parents(n+1, -1); // 1-based indexing.
    vector<int> subtree_Size(n+1, -1); // 1-based indexing.
    DFS(root, Adjacency_List, -1, parents, subtree_Size);
    int ancestor = y;
    while(parents[ancestor] != x){
        ancestor = parents[ancestor];
    }
    
    int a = (subtree_Size[x]-subtree_Size[ancestor]);
    int b = subtree_Size[y];

    // O/P
    int ans = ((n * (n-1)) - (a * b));
    cout << ans << endl;
    // TC = O(n)
    // SC = O(n)
}