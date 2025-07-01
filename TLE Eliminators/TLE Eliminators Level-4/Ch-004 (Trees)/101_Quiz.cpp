// Correct.
// This is Mentor's code, but I know the concept
//  behind Problem.

// C. Kuro and Walking Route
// https://codeforces.com/contest/979/problem/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> in_Time(1e6), out_Time(1e6);
int global_Time = 0;
void Subtree_Size_and_In_Out_Time(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& subtree_Size){
    subtree_Size[current_Node] = 1; // 1-based indexing.

    global_Time++;
    in_Time[current_Node] = global_Time;

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            Subtree_Size_and_In_Out_Time(neighour, adjacency_List, current_Node, subtree_Size);
            subtree_Size[current_Node] += subtree_Size[neighour];
        }
    }
    global_Time++;
    out_Time[current_Node] = global_Time;
}

bool is_Ancestor(int node_A, int node_B){
    if((in_Time[node_A] <= in_Time[node_B]) && (out_Time[node_A] >= out_Time[node_B])){
    // Here, ( <= & >= ) -> '=' is used because if 'x' is
    //   direct child of 'y' i.e. node_A & node_B are same.
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
    int n, x, y; cin >> n >> x >> y;
    vector<vector<int>> Adjacency_List(n+1);
    for(int i=0; i < n-1; i++){
        int a, b; cin >> a >> b; // 'u' & 'v' => Edge List.

        Adjacency_List[a].push_back(b); // Both lines convert Uni-directional
        Adjacency_List[b].push_back(a); // edges in tree to bi-directional &
                        // stored in 1-based indexing.
    }

    // Solution
    int root = y; // y => Root.
    vector<int> subtree_Size(n+1, -1); // 1-based indexing.
    Subtree_Size_and_In_Out_Time(root, Adjacency_List, -1, subtree_Size);

    int ans = (n * (n-1));
    int val = n;
    for(auto child : Adjacency_List[y]){
        if(is_Ancestor(child, x)){
            val -= subtree_Size[child];
            break;
        }
    }
    
    // O/P
    ans -= (subtree_Size[x] * val);
    cout << ans << endl;

    // TC = O(n).
    // SC = O(n).
}