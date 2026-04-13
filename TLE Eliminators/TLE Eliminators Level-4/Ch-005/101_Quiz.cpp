// (Same as 'House Robber' problem in Leetcode with trees.)

// Correct.
// (This is My code but Mentor's logic. So, write logic
//   but not write code in Register.)


// Quiz-1: Given a tree T of N nodes, where each node 
//         has C[i] coins. You need to choose a subset  
// of nodes s.t. every pair of nodes in this subset is  
// not connected by an edge. Find the max. no. of 
// coins you can get.




























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


vector<vector<int>> Adjacency_List(1e5+5);
vector<int> coins(1e5+5);
vector<vector<int>> DP(1e5+5);
void DP_Coins(int current_Node, int parent){
    DP[current_Node][1] = coins[current_Node]; // Take
    DP[current_Node][0] = 0; // Not Take

    for(int neighour : Adjacency_List[current_Node]){
        if(neighour != parent){
            DP_Coins(neighour, current_Node);
            DP[current_Node][1] += DP[neighour][0];
            DP[current_Node][0] += max(DP[neighour][0], DP[neighour][1]);
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
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }
    for(int i=1; i <= n; i++){ cin >> coins[i];}

    // Solution
    int root = 1;
    DP_Coins(root, -1);

    // O/P
    int ans = max(DP[root][1], DP[root][0]);
    cout << ans << endl;
}