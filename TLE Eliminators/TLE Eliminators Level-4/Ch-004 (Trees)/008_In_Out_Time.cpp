// Q.6: Ancestor Problem. (Slide-2, Page-21)





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> in_Time(1e6), out_Time(1e6);
int global_Time = 0;
void in_out_Time(int current_Node, vector<vector<int>>& adjacency_List, int parent){
    global_Time++;
    in_Time[current_Node] = global_Time;

    for(int neighbour : adjacency_List[current_Node]){ // 1-based indexing.
        if(neighbour != parent){
            in_out_Time(neighbour, adjacency_List, current_Node);
        }
    }

    global_Time++;
    out_Time[current_Node] = global_Time;
}

bool is_Ancestor(int node_A, int node_B){
    if((in_Time[node_A] < in_Time[node_B]) && (out_Time[node_A] > out_Time[node_B])){
        return true;
    }
    else{
        return false;
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
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }

    // Solution
    int root = 1;
    in_out_Time(root, Adjacency_List, -1); // O(n)

    // I/P + O/P
    int q; cin >> q; // no. of query.
    while(q--){
        int x, y; cin >> x >> y;

        if(is_Ancestor(x, y)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }

    // TC = O(n).
    // SC = O(n).
}