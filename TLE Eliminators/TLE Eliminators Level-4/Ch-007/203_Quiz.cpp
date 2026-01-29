// Correct.
// (This is Mentor's code.) 

// USACO 2016 US Open Contest, Gold
// Problem 2. Closing the Farm
// https://usaco.org/index.php?page=viewproblem2&cpid=646


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

set<int> Connected_Component;
class UnionFind{
    private: vector<int> parent, rank, size;
    public:
        UnionFind(int n){
            rank.assign(n+1, 0); parent.assign(n+1, 0); size.assign(n+1, 1);
            iota(parent.begin(), parent.end(), 0);
        }

        int findSet(int i){ return (parent[i] == i) ? i : parent[i] = findSet(parent[i]);} // O(log(n))
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);} // O(log(n))
        int isSize(int i){ return size[i];};

        void unionSet(int i, int j){ // O(log(n))
            if(!isSameSet(i, j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]){ 
                    Connected_Component.erase(parent[y]);
                    parent[y] = x;
                    size[x] += size[y];
                }
                else{
                    Connected_Component.erase(parent[x]);
                    parent[x] = y;
                    size[y] += size[x];
                    if(rank[x] == rank[y]){ rank[y]++;}
                }
            }
        }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // #ifndef ONLINE_JUDGE  // (To submit in USACO)
    // freopen("closing.in", "r", stdin);
    // freopen("closing.out", "w", stdout);
    // #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    UnionFind DSU(n);
    vector<vector<int>> adj(n+1);
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    vector<int> is_Open(n+1, 0);
    vector<int> queries(n);
    for(int i=0; i < n; i++){ cin >> queries[i];}

    // Solution
    vector<int> ans;
    for(int i = n-1; i >= 0; i--){
        int node = queries[i];
        Connected_Component.insert(DSU.findSet(node));
        is_Open[node] = 1;

        for(auto child : adj[node]){
            if(is_Open[child]){
                DSU.unionSet(node, child);
            }
        }

        if(Connected_Component.size() == 1){ ans.push_back(1);}
        else{ ans.push_back(0);}
    }

    // O/P
    reverse(ans.begin(), ans.end());
    for(int i=0; i < ans.size(); i++){ 
        if(ans[i] == 1){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}