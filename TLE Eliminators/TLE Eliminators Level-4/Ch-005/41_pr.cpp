// 

// Tree Distances I
// https://cses.fi/problemset/task/1132



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> ans((2*1e5)+5, -1);
void re_Root(int node, vector<vector<int>>& adjacency_List, int parent, vector<int>& global_Depth, vector<int>& Depth){
    int temp_depth_Parent = 0;
    cout << node << " " << 1 << endl;
    for(int i=1; i <= adjacency_List.size()-1; i++){ 
        cout << Depth[i] << " ";
    }cout << endl;
    
    if(parent != -1){
        for(auto &i : adjacency_List[parent]){
            if(i != node){
                if(Depth[node] == -1){
                    temp_depth_Parent = max(temp_depth_Parent, global_Depth[i]+1);
                }
                else{
                    temp_depth_Parent = max(temp_depth_Parent, Depth[i]+1);
                }
            }
        }
        Depth[node] = max(global_Depth[node], temp_depth_Parent+1);
        Depth[parent] = temp_depth_Parent;
        ans[node] = Depth[node];
    }
    else{ ans[node] = global_Depth[node];}
    
    cout << node << " " << 2 << endl;
    for(int i=1; i <= adjacency_List.size()-1; i++){ 
        cout << Depth[i] << " ";
    }cout << endl;
    
    for(auto &i : adjacency_List[node]){
        if(i != parent){
            re_Root(i, adjacency_List, node, global_Depth, Depth);
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // ios::sync_with_stdio(false); cin.tie(NULL);
    
    // I/P
    int n; cin >> n;
    vector<vector<int>> adjacency_List(n+1);
    vector<int> global_Depth(n+1, 0);
    for(int i=1; i < n; i++){
        int x, y; cin >> x >> y;
        adjacency_List[x].push_back(y);
        adjacency_List[y].push_back(x);
    }
    
    // Solution
    function<int(int, int, int)>dfs = [&](int node, int parent, int depth){
        for(auto &i : adjacency_List[node]){
            if(i != parent){
                dfs(i, node, depth+1);
                global_Depth[node] = max(global_Depth[node], global_Depth[i]+1);
            }
        }
        
        return global_Depth[node];
    };

    dfs(1, -1, 1);
    
    vector<int> depth(n+1, -1);
    for(int i=1; i <= n; i++){ cout << global_Depth[i] << " ";}
    cout << endl;
    re_Root(1, adjacency_List, -1, global_Depth, depth);

    // O/P
    for(int i=1; i <= n; i++){ cout << ans[i] << " ";}
    cout << endl;
    // TC = O(n)
    // SC = O(n)
}