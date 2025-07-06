// 

// B. Dynamic Diameter
// https://codeforces.com/gym/102694/problem/B



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Level(int current_node, vector<vector<int>>& adjacency_List, int parent, vector<int>& level){
    if(parent == -1){
        level[current_node] = 0;
    }
    else{
        level[current_node] = level[parent] + 1;
    }

    for(int neighour : adjacency_List[current_node]){
        if(neighour != parent){
            Level(neighour, adjacency_List, current_node, level);
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
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;

        adjacency_List[u].push_back(v);
        adjacency_List[v].push_back(u);
    }

    // Solution
    int root = 1;
    vector<int> level(n+1, -1);
    Level(root, adjacency_List, -1, level);
    
    int y = 1;
    int max_level = 0;
    for(int i=1; i <= n; i++){
        if(level[i] > max_level){
            max_level = level[i];
            y = i;
        }
    }
    
    vector<int> level_2(n+1, -1);
    Level(y, adjacency_List, -1, level_2);

    int diameter = 0;
    for(int i=1; i <= n; i++){
        if(level_2[i] > diameter){
            diameter = level_2[i];
        }
    }

    vector<int> ans(n+1);
    // for(int i=1; i <= n; i++){
    //     if(i == y){
    //         ans[i] = (diameter + 1);
    //     }
    //     else{
    //         ans[i] = diameter;
    //     }
    // }

    for(int i=1; i <= n; i++){
        if((level_2[i] == diameter) || (level_2[i] == 0)){
            ans[i] = (diameter + 1);
        }
        else{
            ans[i] = diameter;
        }
    }

    // O/P
    for(int i=1; i <= n; i++){
        cout << ans[i] << endl;
    }
    cout << endl;
}