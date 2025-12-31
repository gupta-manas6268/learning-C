// Correct.
// This is Mentor's code.

// (I don't get it's logic. So, write logic & think
//   about whether to write code or not.)

// C. Tree Cutting
// https://codeforces.com/problemset/problem/1946/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Number_edges_removed(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& subtree_Size, int &num_egdes_removed, int x){ // O(n)
    subtree_Size[current_Node] = 1; // 1-based indexing.

    for(int child : adjacency_List[current_Node]){
        if(child != parent){
            Number_edges_removed(child, adjacency_List, current_Node, subtree_Size, num_egdes_removed, x);
            subtree_Size[current_Node] += subtree_Size[child];
        }
    }

    if(current_Node == 1){ // i.e. current_Node = root.
        if(subtree_Size[current_Node] < x){
            num_egdes_removed--;
        }
    }
    else{
        if(subtree_Size[current_Node] >= x){
            num_egdes_removed++;
            subtree_Size[current_Node] = 0;
        }
    }
}

int binary_Search(int n, int k, vector<vector<int>>& adjacency_List, vector<int>& subtree_Size){ // O(log(n))
    int left = 1, right = n;

    int ans = 1;
    while(left <= right){
        int mid = (left + right)/ 2;

        int root = 1;
        int num_edges_removed = 0;
        Number_edges_removed(root, adjacency_List, -1, subtree_Size, num_edges_removed, mid);

        if(num_edges_removed >= k){
            ans = mid;
            left = (mid + 1);
        }
        else{
            right = (mid - 1);
        }
    }

    return ans;
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
        vector<int> subtree_Size(n+1);
        int ans = binary_Search(n, k, Adjacency_List, subtree_Size);
        
        // O/P
        cout << ans << endl;

        // TC = O(n * log(n)).
    }    
}