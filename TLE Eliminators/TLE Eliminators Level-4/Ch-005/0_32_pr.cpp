// Correct.
// (I solved it with the help of Hint.)

// Counting Paths
// https://cses.fi/problemset/task/1136




// (Hint: Given below)



























// (It uses Difference Array from Prefix Sum.)
















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// From code '102_Quiz.cpp' (↓)
const int N = 2e5 + 1, M = 20;

vector<int> adjacency_List[N];
int depth[N], Parent[N][M];
int curr_Parent[N];

void dfs_2(int cur, int par){ // O(n*log(n))
// dfs(1, 0) => (Correct)
// dfs(1, -1) => (Wrong)
//  ((↑) As, for 'par = -1', I didn't mentioned 'if'
//   condition for edge cases.)
    curr_Parent[cur] = par;
    depth[cur] = depth[par] + 1;
    Parent[cur][0] = par;
    for(int j=1; j < M; j++){
        Parent[cur][j] = Parent[Parent[cur][j-1]][j-1];
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs_2(x, cur);}
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
// From code '102_Quiz.cpp' (↑)

void BFS(int root, vector<int>& ans){
    queue<int> qu;
    vector<bool> visited(N, false);
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
    int n, m; cin >> n >> m;
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adjacency_List[u].push_back(v);
        adjacency_List[v].push_back(u);
    }
    vector<pair<int,int>> Path(m);
    for(int i=0; i < m; i++){ 
        cin >> Path[i].first >> Path[i].second;
    }

    // Solution
    
    // dfs_2(1, -1); // Wrong  (See line-72 to 75)
    dfs_2(1, 0); // Correct
    vector<int> bfs;
    BFS(1, bfs);
    reverse(bfs.begin(), bfs.end());
    vector<pair<int, pair<int,int>>> vec(n+1, {0, {0, 0}});
    for(int i=0; i < m; i++){
        int node_1 = Path[i].first, node_2 = Path[i].second;
        int lca = LCA(node_1, node_2);
        if(node_1 != lca){
            vec[node_1].first++;
        }
        if(node_2 != lca){
            vec[node_2].first++;
        }
        if(node_1 == node_2){
            vec[node_1].first++;
            vec[node_1].second.first--;
        }
        else if((lca == node_1) || (lca == node_2)){
            vec[lca].second.first--;
        }
        else if((lca != node_1) && (lca != node_2)){
            vec[lca].second.first--;
            vec[lca].second.second--;
        }
    }
    
    for(int i=0; i < n; i++){
        int node = bfs[i], par = curr_Parent[bfs[i]];
        if(curr_Parent[bfs[i]] != -1){
            vec[par].first += (vec[node].first + vec[node].second.first + vec[par].second.second);
            vec[par].second.second = 0;
        }
    }

    // O/P
    for(int i=1; i <= n; i++){
        cout << vec[i].first << " ";
    }
    cout << endl;
    // TC = O(n*log(n) + m*log(n))
    // SC = O(n*log(n))
}