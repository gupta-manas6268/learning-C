// (This Quiz starts from Slide-1, Page-16)

// Correct.
// (This is My code, only Formula of Page-17 is taken
//  from Mentor.)

// (So, don't write code but write Formula.)

// Distance Queries
// https://cses.fi/problemset/task/1135



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// From code '101_02_Quiz.cpp' (↓)
const int N = 2e5 + 1, M = 20;
// log(N) ≈ 20, that's why M = 20

vector<vector<int>> adjacency_List(N);
int depth[N], Parent[N][M];

void dfs(int cur, int par){ // O(n)
    depth[cur] = depth[par] + 1;
    Parent[cur][0] = par;
    for(int j=1; j < M; j++){
        Parent[cur][j] = Parent[Parent[cur][j-1]][j-1];
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs(x, cur);}
    }
}
// From code '101_02_Quiz.cpp' (↑)

void Level(int current_Node, vector<vector<int>>& Adjacency_List, int parent, vector<int>& level){
    if(parent == -1){
        level[current_Node] = 0; 
    }
    else{
        level[current_Node] = level[parent] + 1;
    }

    for(int neighour : Adjacency_List[current_Node]){
        if(neighour != parent){
            Level(neighour, Adjacency_List, current_Node, level);
        }
    }
}

int LCA(int u, int v){ // O(log(n))
    if(u == v){ return u;}
    if(depth[u] < depth[v]){ swap(u, v);}

    int diff = (depth[u] - depth[v]);
    for(int j = M-1; j >= 0; j--){ // O(log(n))
    // We are doing Binary-Search
        if((diff >> j) & 1){ u = Parent[u][j];}
    }

    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if(Parent[u][j] != Parent[v][j]){
            u = Parent[u][j];
            v = Parent[v][j];
        }
    }

    return (u != v ? Parent[u][0] : u);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, q; cin >> n >> q;
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adjacency_List[u].push_back(v);
        adjacency_List[v].push_back(u);
    }

    // Solution
    vector<int> level(n+1, 0);
    Level(1, adjacency_List, -1, level);
    dfs(1, 0);
    for(int i=0; i < q; i++){
        int a, b; cin >> a >> b; // I/P
        int lca = LCA(a, b);

        // O/P
        int ans = (level[a] + level[b] - (2 * level[lca]));
        cout << ans << endl;
    }

    // TC = O(n*log(n) + q*log(n))
    // SC = O(n*log(n))
}