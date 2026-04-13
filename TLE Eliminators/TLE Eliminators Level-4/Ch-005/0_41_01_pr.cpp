// Wrong.

// Tree Distances I
// https://cses.fi/problemset/task/1132




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void dfs_2(int cur, vector<vector<int>>& adjacency_List, int par, vector<int>& Parent){ // O(n*log(n))
// dfs(1, 0) => (Correct)
// dfs(1, -1) => (Wrong)
//  ((↑) As, for 'par = -1', I didn't mentioned 'if'
//   condition for edge cases.)
    Parent[cur] = par;
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs_2(x, adjacency_List, cur, Parent);}
    }
}

void reRoot(int cur, vector<vector<int>>& adjacency_List, int par, int val, vector<pair<int,int>>& depth, vector<int>& ans){ // O(n*log(n))
// dfs(1, 0) => (Correct)
// dfs(1, -1) => (Wrong)
//  ((↑) As, for 'par = -1', I didn't mentioned 'if'
//   condition for edge cases.)
    int value_1 = -1, value_2 = -1;
    if(par != 0){
        ans[cur] = max(val+1, depth[cur].first);
        cout << cur << " " << val << " " << ans[cur] << endl;
        if((val + 1) >= depth[cur].first){
            value_1 = (val + 1);
            // swap(depth[cur].first, depth[cur].second);
            // depth[cur].first = ans[cur];
        }
        else if((val + 1) >= depth[cur].second){
            value_2 = (val + 1);
            // depth[cur].second = ans[cur];
        }
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ 
            if(value_1 != -1){
                reRoot(x, adjacency_List, cur, value_1, depth, ans);
            }
            else if(value_2 != -1){
                reRoot(x, adjacency_List, cur, value_2, depth, ans);
            }
            else if((depth[x].first + 1) == depth[cur].first){
                reRoot(x, adjacency_List, cur, depth[cur].second, depth, ans);
            }
            else{ reRoot(x, adjacency_List, cur, depth[cur].first, depth, ans);}
        }
    }
}

void BFS(int root, vector<vector<int>>& adjacency_List, vector<int>& ans){
    int n = (adjacency_List.size() + 1);

    queue<int> qu;
    vector<bool> visited(n, false);
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
    int n; cin >> n;
    vector<vector<int>> adjacency_List(n+1);
    for(int i=1; i < n; i++){
        int x, y; cin >> x >> y;
        adjacency_List[x].push_back(y);
        adjacency_List[y].push_back(x);
    }
    
    // Solution
    // cout << 1 << endl;
    vector<int> bfs;
    BFS(1, adjacency_List, bfs);
    reverse(bfs.begin(), bfs.end());

    // for(int i=0; i < n; i++){ cout << bfs[i] << " ";}
    // cout << endl;

    vector<int> parent(n+1);
    dfs_2(1, adjacency_List, 0, parent);
    // for(int i=1; i <= n; i++){ cout << parent[i] << " ";}
    // cout << endl;

    vector<pair<int,int>> depth(n+1, {0,0});
    for(int i=0; i < n; i++){
        int node = bfs[i], par = parent[node];
        if(par != 0){
            if(depth[node].first+1 >= depth[par].first){
                swap(depth[par].first, depth[par].second);
                depth[par].first = (depth[node].first+1);
            }
            else if(depth[node].first+1 > depth[par].second){
                depth[par].second = (depth[node].first+1);
            }
        }
    }

    // for(int i=1; i <= n; i++){
    //     cout << depth[i].first << " " << depth[i].second << endl;
    // } cout << endl;

    vector<int> ans(n+1, 0);
    ans[1] = depth[1].first;
    reRoot(1, adjacency_List, 0, -1, depth, ans);

    // // O/P
    for(int i=1; i <= n; i++){ cout << ans[i] << " ";}
    cout << endl;
    // TC = O(n)
    // SC = O(n)
}