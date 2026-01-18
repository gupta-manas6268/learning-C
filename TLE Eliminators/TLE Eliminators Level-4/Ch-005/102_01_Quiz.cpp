// Wrong.

// Tree Distances II
// https://cses.fi/problemset/task/1133


// (Hint given below.)

























// (Hint: dp[new_root] = dp[parent] - sz[new_root] + (n - sz[new_root]))






















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int Max_n = 200005;

vector<vector<int>> Adjacency_List;
vector<int> Parent, subtree_Size, level; 
vector<int> DP;
void Subtree_Size(int current_Node, int parent){
    subtree_Size[current_Node] = 1; // 1-based indexing.
    Parent[current_Node] = parent;

    for(int neighour : Adjacency_List[current_Node]){
        if(neighour != parent){
            Subtree_Size(neighour, current_Node);
            subtree_Size[current_Node] += subtree_Size[neighour];
        }
    }
}
void Level(int current_Node, int parent){
    if(parent == -1){
        level[current_Node] = 0; 
    }
    else{
        level[current_Node] = level[parent] + 1;
    }

    for(int neighour : Adjacency_List[current_Node]){
        if(neighour != parent){
            Level(neighour, current_Node);
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

    Adjacency_List.assign(n+1, {});
    Parent.assign(n+1, -1), subtree_Size.assign(n+1, 0), level.assign(n+1, 0);
    DP.assign(n+1, 0);
    
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }

    // Solution
    int root = 1;
    Subtree_Size(root, -1);
    Level(root, -1);

    for(int i=1; i <= n; i++){
        DP[1] += level[i];
    }
    for(int i=2; i <= n; i++){
        DP[i] = (DP[Parent[i]] + n - (2 * subtree_Size[i]));
    }

    // O/P
    for(int i=1; i <= n; i++){
        cout << DP[i] << " ";
    }
    cout << endl;
}