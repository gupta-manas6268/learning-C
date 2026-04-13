// Correct.

// Subordinates
// https://cses.fi/problemset/task/1674




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void Subtree_Size(int current_Node, vector<vector<int>>& adjacency_List, int parent, vector<int>& subtree_Size){
    subtree_Size[current_Node] = 1; // 1-based indexing.

    for(int neighour : adjacency_List[current_Node]){
        if(neighour != parent){
            Subtree_Size(neighour, adjacency_List, current_Node, subtree_Size);
            subtree_Size[current_Node] += subtree_Size[neighour];
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
    vector<vector<int>> Adjacency_List(n+1);
    for(int i=2; i <= n; i++){
        int boss; cin >> boss; // 'u' & 'v' => Edge List.

        Adjacency_List[i].push_back(boss); 
        Adjacency_List[boss].push_back(i); 
    }

    // Solution
    int root = 1;
    vector<int> subtree_Size(n+1, -1); // 1-based indexing.
    Subtree_Size(root, Adjacency_List, -1, subtree_Size);

    // O/P
    for(int i=1; i <= n; i++){
        cout << (subtree_Size[i] - 1) << " ";
    }
    cout << endl;
}