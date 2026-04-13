// Wrong.

// Distinct Colors
// https://cses.fi/problemset/task/1139




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

set<int> Subtree_Colors(int node, vector<vector<int>>& adjacency_List, int parent, vector<int>& c, vector<int>& ans){
    set<int> colors;
    colors.insert(c[node]);

    for(int neighour : adjacency_List[node]){
        if(neighour != parent){
            set<int> temp = Subtree_Colors(neighour, adjacency_List, node, c, ans);
            for(auto &i : temp){ colors.insert(i);}
        }
    }
    ans[node] = colors.size();

    return colors;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> c(n+1);
    for(int i=1; i <= n; i++){ cin >> c[i];}
    vector<vector<int>> Adjacency_List(n+1);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v; 

        Adjacency_List[u].push_back(v); 
        Adjacency_List[v].push_back(u); 
    }

    // Solution
    vector<int> ans(n+1, 0); 
    Subtree_Colors(1, Adjacency_List, -1, c, ans);

    // O/P
    for(int i=1; i <= n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    // TC = O(n * log(n))
    // SC = O(n)
}