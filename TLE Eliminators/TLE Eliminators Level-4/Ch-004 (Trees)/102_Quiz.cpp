// From Lecture-3, [1:07:00].
// 





// C. Tree Cutting
// https://codeforces.com/problemset/problem/1946/C







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

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, k; cin >> n >> k;
        vector<vector<int>> Adjacency_List(n+1);
        for(int i=0; i < n-1; i++){
            int a, b; cin >> a >> b; // 'u' & 'v' => Edge List.

            Adjacency_List[a].push_back(b); // Both lines convert Uni-directional
            Adjacency_List[b].push_back(a); // edges in tree to bi-directional &
                            // stored in 1-based indexing.
        }

        // Solution
        int left = 1, right = n;
        int ans = 1;
        while(left <= right){
            int mid = (left + right)/ 2;


        }
        
        // O/P

        // TC = O(n).
        // SC = O(n).
    }
    
}