// H.W.


// Q.5: You're are given a tree with nodes numbered from 1 to N,
//       rooted at 1.
//      Find the farthest leaf node from each node in its subtree ?
//       (Slide-2, Page-7)




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Farthest_Leaf_Node(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& Farthest){
    Farthest[current_Node] = 0; // 1-based indexing.

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            Farthest_Leaf_Node(neighour, adjacency_List, current_Node, Farthest);
            Farthest[current_Node] = max(Farthest[current_Node], 1 + Farthest[neighour]);
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
    vector<int> Farthest(n+1, -1); // 1-based indexing.
    Farthest_Leaf_Node(root, Adjacency_List, -1, Farthest);

    // O/P
    for(int i=1; i <= n; i++){ cout << Farthest[i] << " ";}
    cout << endl;
}