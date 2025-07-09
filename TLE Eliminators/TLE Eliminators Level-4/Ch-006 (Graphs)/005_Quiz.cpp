// Correct.
// This is Mentor's code.

// B. Mahmoud and Ehab and the bipartiteness
// https://codeforces.com/problemset/problem/862/b



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int col[2] = {0, 0};
void DFS(int node, vector<vector<int>>& adj_List_1, int parent, int color){
    col[color]++;
    for(auto &i : adj_List_1[node]){
        if(i != parent){
            DFS(i, adj_List_1, node, color ^ 1);
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
    vector<vector<int>> adj_List_1(n+1);
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adj_List_1[u].push_back(v);
        adj_List_1[v].push_back(u);
    }

    // Solution
    DFS(1, adj_List_1, -1, 0);

    // O/P
    int ans = (col[0] * col[1]) - (n-1);
    cout << ans << endl;
}