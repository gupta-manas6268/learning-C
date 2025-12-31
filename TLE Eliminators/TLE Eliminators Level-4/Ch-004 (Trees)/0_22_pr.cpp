// Correct.
// (This is My version of Mentor's code.)

// A. Peculiar apple-tree
// https://codeforces.com/problemset/problem/930/A



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int BFS(int root, vector<vector<int>>& adjacency_List, vector<int>& ans){ // O(n)
    int n = (adjacency_List.size() + 1);
    
    queue<int> qu;
    vector<bool> visited(n, false);
    qu.push(root);
    visited[root] = true;
    
    vector<int> level_ans;
    while(!(qu.empty())){
        queue<int> qu_2;
        int temp_level = 0;
        while(!(qu.empty())){
            int current_Node = qu.front();
            qu.pop();
            temp_level++;
            for(int neighour : adjacency_List[current_Node]){
                if(!visited[neighour]){
                    visited[neighour] = true;
                    qu_2.push(neighour);
                }
            }
        }
        level_ans.push_back(temp_level);
        qu = qu_2;
    }
    
    int Ans = 0;
    for(int i=0; i < level_ans.size(); i++){
        if((level_ans[i] % 2) != 0){ // Odd
            Ans++;
        }
    }
    return Ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    // I/P
    int n; cin >> n;
    vector<int> p(n+1);
    p[1] = -1;
    for(int i=2; i <= n; i++){ cin >> p[i];}
    
    // Solution
    
    // At root node, we have 1 or 0 apples at a time.
    // 
    // If a level have N apples (N => Natural no.)
    //  if(N == odd){
    //      N = (2*k + 1)  (Odd)
    //      After 1-sec in parent nodes,
    //      no. of apples = (2*k + 1 - 2*y)  => (Odd)
    //      
    //      At root node, no. of apples = (2*k + 1 - 2*y - 2*z) => (Odd)
    //      So, at root node, no. of apples = 1
    //  }
    //  else{  // (N => even)
    //      N = (2*k)  (Odd)
    //      After 1-sec in parent nodes,
    //      no. of apples = (2*k - 2*y)  => (Odd)
    //      
    //      At root node, no. of apples = (2*k - 2*y - 2*z) => (Odd)
    //      So, at root node, no. of apples = 0
    //  }


    vector<vector<int>> Adjacency_List(n+1);
    for(int i=2; i <= n; i++){
        Adjacency_List[i].push_back(p[i]);
        Adjacency_List[p[i]].push_back(i);
    }
    vector<int> BFS_traversal; // 0-based indexing.

    
    // O/P
    int ans = BFS(1, Adjacency_List, BFS_traversal);
    cout << ans << endl;
    // TC = O(n)
    // SC = O(n)
}