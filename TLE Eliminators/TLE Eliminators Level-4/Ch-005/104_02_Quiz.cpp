// Correct.
// (This is Mentor's code.)

// (Write logic & Formula in Register & think about
//   whether to write code or not.)

// Distinct Colors
// https://cses.fi/problemset/task/1139






// (Hint given below.)



















// |S[node]| < |S[parent]|
//  (|S[node]| = Size of node set.)

// swap(s[i], s[j]) => TC = O(1)
//  (s[i] => set, O(1) because swap just changes 
//   pointer of set.)


















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
    set<int> distinct_Colours[n+1]; // Array of Set
    vector<int> adj[n+1], subtree(n+1); // (subtree => subtree_Size)
    for(int i=1; i <= n; i++){
        int x; cin >> x;
        distinct_Colours[i].insert(x);
    }
    for(int i=1; i < n; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    // Solution
    function<void(int, int)> dfs = [&](int node, int parent){
        for(auto &x : adj[node]){
            if(x != parent){
                dfs(x, node);
                if(distinct_Colours[x].size() > distinct_Colours[node].size()){
                    swap(distinct_Colours[x], distinct_Colours[node]); // O(1)
                }
                for(auto &e : distinct_Colours[x]){
                    distinct_Colours[node].insert(e);
                }
            }
        }
        subtree[node] = distinct_Colours[node].size();
    };
    dfs(1, 0);

    // O/P
    for(int i=1; i <= n; i++){ cout << subtree[i] << " ";}
    cout << endl;
}