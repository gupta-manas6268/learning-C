// Method-2: (Slide-2, Page-17)






#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

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

int farthest_Node(int n, vector<int>& dist){ // O(n)
    int farthest = 1;
    for(int i=0; i <= n; i++){
        if(dist[i] > dist[farthest]){
            farthest = i;
        }
    }
    return farthest;
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
    vector<int> dist_X(n+1, -1); // 1-based
    vector<int> dist_Y(n+1, -1); // 1-based
    // dist_X => distance from X

    int x = 1; // Random no. from [1, n]
    Level(x, Adjacency_List, -1, dist_X);

    int y = farthest_Node(n, dist_X);
    Level(y, Adjacency_List, -1, dist_Y);

    int z = farthest_Node(n, dist_Y);
    
    // O/P
    int Diameter = dist_Y[z];
    cout << Diameter << endl;

    // TC = O(n)
    // SC = O(n)
}