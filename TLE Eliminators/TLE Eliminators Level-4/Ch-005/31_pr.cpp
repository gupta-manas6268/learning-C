// Correct.

// QTREE2 - Query on a tree II
// https://www.spoj.com/problems/QTREE2/




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
const int N = 1e4 + 1, M = 15;

void dfs_1(int node, vector<vector<int>>& adjacency_List, int parent, map<pair<int,int>, int>& cost, vector<int>& Prefix_Cost){ // O(n)
    if(parent != -1){
        Prefix_Cost[node] = (Prefix_Cost[parent] + cost[{parent, node}]);
    }
    for(int neighbour : adjacency_List[node]){ // 1-based indexing.
        if(neighbour != parent){
            dfs_1(neighbour, adjacency_List,node, cost, Prefix_Cost);
        }
    }
}

void dfs_2(int cur, vector<vector<int>>& adjacency_List, int par, vector<int>& depth, vector<vector<int>>& Parent){ // O(n*log(n))
    depth[cur] = depth[par] + 1;
    Parent[cur][0] = par;
    for(int j=1; j < M; j++){
        Parent[cur][j] = Parent[Parent[cur][j-1]][j-1];
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs_2(x, adjacency_List, cur, depth, Parent);}
    }
}

void Level(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& level){ // O(n)
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

int Kth_Parent(int u, int k, vector<vector<int>>& Parent){ // O(log(n))
    for(int i = M-1; i >= 0; i--){   // Both lines  (MSB to LSB)
        // for(int i = 0; i <= M-1; i--){ // work well. (LSB to MSB)
        // (MSB => Most Significant Bit)
        // (LSB => Least Significant Bit)
        if((1 << i) & k){ u = Parent[u][i];}
    }
    
    return u;
}

int LCA(int u, int v, vector<int>& depth, vector<vector<int>>& Parent){ // O(log(n))
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
    
    int tc; cin >> tc;
    
    while (tc--){
        // I/P
        int n; cin >> n;
        map<pair<int,int>, int> cost;
        vector<vector<int>> adjacency_List(n+1), Parent(n+1, vector<int> (M));
        vector<int> depth(n+1);
        for(int i=0; i < n-1; i++){
            int a, b, c; cin >> a >> b >> c;
            adjacency_List[a].push_back(b);
            adjacency_List[b].push_back(a);
            cost[{a, b}] = c;
            cost[{b, a}] = c;
        }
        
        // Solution
        vector<int> prefix_Cost(n+1, 0);
        prefix_Cost[1] = 0;
        dfs_1(1, adjacency_List, -1, cost, prefix_Cost);

        vector<int> level(n+1, 0);
        Level(1, adjacency_List, -1, level);
        dfs_2(1, adjacency_List, 0, depth, Parent);

        string temp = "";
        while(temp != "DONE"){
            temp = ""; cin >> temp;

            if(temp == "DIST"){
                // I/P
                int a, b; cin >> a >> b; 
                int lca = LCA(a, b, depth, Parent);
                
                // O/P
                int ans = (prefix_Cost[a] + prefix_Cost[b] - (2 * prefix_Cost[lca]));
                cout << ans << endl;
            }
            else if(temp == "KTH"){
                // I/P
                int a, b, kth; cin >> a >> b >> kth;
                int lca = LCA(a, b, depth, Parent);

                // O/P
                kth--;
                int length_1 = (level[a] - level[lca]);
                int length_2 = (level[b] - level[lca]);
                int length = (length_1 + length_2);

                int ans = -1;
                if(kth <= length_1){
                    ans = Kth_Parent(a, kth, Parent);
                }
                else{
                    kth = (length_1 + length_2 - kth);
                    ans = Kth_Parent(b, kth, Parent);
                }

                cout << ans << endl;
            }
            else{ break;}
        }
    }
    // TC = O(tc * (n*log(n) + q*log(n)))
    // SC = O(n*log(n))
}