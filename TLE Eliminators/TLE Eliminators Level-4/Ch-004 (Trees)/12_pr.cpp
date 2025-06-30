// 

// C. Kefa and Park
// https://codeforces.com/problemset/problem/580/C



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans = 0;
void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& cat, vector<int> consecutive, int m){
    if(consecutive[current_Node] <= m){
        if((adjacency_List[current_Node].size() == 1) && (current_Node != 1)){
            ans++;
        }
        for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
            if(neighbour != parent){
                if(cat[neighbour] == 1){
                    consecutive[neighbour] = consecutive[current_Node] + 1;
                }
                else{
                    consecutive[neighbour] = 0;
                }

                if(consecutive[neighbour] <= m){
                    DFS(neighbour, adjacency_List, current_Node, cat, consecutive, m);
                }
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
    vector<int> cat(n+1); // 1-based indexing.
    for(int i=1; i <= n; i++){
        int temp; cin >> temp;
        cat[i] = temp;
    }
    vector<vector<int>> Adjacency_List(n+1); // 1-based.
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }

    // Solution
    int root = 1;
    vector<int> consecutive(n+1, -1);
    consecutive[root] = cat[root];
    DFS(root, Adjacency_List, -1, cat, consecutive, m);

    // O/P
    cout << ans << endl;
}