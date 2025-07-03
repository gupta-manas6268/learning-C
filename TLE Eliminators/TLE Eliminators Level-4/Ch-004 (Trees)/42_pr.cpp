// 

// A. Timofey and a tree
// https://codeforces.com/problemset/problem/763/A



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int warn_node;
bool is_Ans = true;

void BFS(int root, vector<vector<int>>& adjacency_List, int warning){
    int n = (adjacency_List.size() + 1);

    queue<int> qu;
    vector<bool> visited(n, false);
    qu.push(root);
    visited[root] = true;
    while(!(qu.empty())){
        int current_Node = qu.front();
        qu.pop();
        
        if(adjacency_List[current_Node].size() >= 3){
            warning++;
            warn_node = current_Node;
            
            if(warning >= 2){
                is_Ans = false; break;
            }
        }
        for(int neighour : adjacency_List[current_Node]){
            if(!visited[neighour]){
                visited[neighour] = true;
                qu.push(neighour);
            }
        }
    }
}

void DFS(int current_Node, vector<vector<int>>& adjacency_List, int parent, int root, vector<pair<int,int>>& ans){
    for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
        if(neighbour != parent){
            DFS(neighbour, adjacency_List, current_Node, root, ans);
        }
    }

    if((adjacency_List[current_Node].size() == 1) && (current_Node != root)){
        ans.push_back({root, current_Node});
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
        int u, v; cin >> u >> v; 

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }
    vector<int> colour(n+1);
    for(int i=1; i <= n; i++){
        int temp; cin >> temp;
        colour[i] = temp;
    }

    // Solution
    int root; // Leaf node.
    for(int i=1; i <= n; i++){
        if(Adjacency_List[i].size() == 1){
            root = i; break;
        }
    }

    int warning = 0;
    warn_node = root;
    BFS(root, Adjacency_List, warning);

    vector<pair<int,int>> ans;
    
    if(is_Ans == true){
        DFS(warn_node, Adjacency_List, -1, warn_node, ans);
    }

    // O/P
    if(is_Ans == true){
        cout << "Yes" << endl;
        cout << ans.size() << endl;
        for(int i=0; i < ans.size(); i++){
            cout << ans[i].first << " " << ans[i].second << endl;
        }
    }
    else{ cout << "No" << endl;}

    // TC = O(n).
    // SC = O(n).
}