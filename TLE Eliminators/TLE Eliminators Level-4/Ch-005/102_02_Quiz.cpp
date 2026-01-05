// Correct.
// (This is Mentor's code.)

// (Write logic & Formula in Register & think about
//   whether to write code or not.)

// Tree Distances II
// https://cses.fi/problemset/task/1133



// (Hint given below.)




















// (Hint: dp[new_root] = dp[parent] - sz[new_root] + (n - sz[new_root]))






















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);
    
    // I/P
    int n; cin >> n;
    vector<vector<int>> adjacency_List(n+1);
    vector<int> subtree_Size(n+1, 1), DP(n+1);
    for(int i=1; i < n; i++){
        int x, y; cin >> x >> y;
        adjacency_List[x].push_back(y);
        adjacency_List[y].push_back(x);
    }
    
    // Solution
    function<int(int, int, int)>dfs = [&](int node, int parent, int depth){
        int ans = depth;
        for(auto &i : adjacency_List[node]){
            if(i != parent){
                ans += dfs(i, node, depth+1);
                subtree_Size[node] += subtree_Size[i];
            }
        }
        
        return ans;
    };
    
    function<void(int, int, int)>re_Root = [&](int node, int parent, int ans){
        DP[node] = ans;
        for(auto &i : adjacency_List[node]){
            if(i != parent){
                re_Root(i, node, ans + n - 2 * subtree_Size[i]);
                // dp[new_root] = dp[parent] - sz[new_root] + (n - sz[new_root])
                //    (sz => subtree_Size)
            }
        }
    };

    // O/P
    re_Root(1, -1, dfs(1, -1, 0));
    for(int i=1; i <= n; i++){ cout << DP[i] << " ";}
    cout << endl;
    // TC = O(n)
    // SC = O(n)
}