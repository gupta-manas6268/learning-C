// Correct.

// D1. Mocha and Diana (Easy Version)
// https://codeforces.com/problemset/problem/1559/D1




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

class UnionFind{
    private: vector<int> parent, rank;
    public:
        UnionFind(int n){
            rank.assign(n+1, 0); parent.assign(n+1, 0);
            iota(parent.begin(), parent.end(), 0);
        }

        int findSet(int i){ return (parent[i] == i) ? i : parent[i] = findSet(parent[i]);} // O(log(n))
        bool isSameSet(int i, int j){ return findSet(i) == findSet(j);} // O(log(n))

        void unionSet(int i, int j){ // O(log(n))
            if(!isSameSet(i, j)){
                int x = findSet(i), y = findSet(j);
                if(rank[x] > rank[y]){ parent[y] = x;}
                else{
                    parent[x] = y;
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

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m1, m2; cin >> n >> m1 >> m2;
    UnionFind DSU_1(n), DSU_2(n);
    for(int i=0; i < m1; i++){
        int u, v; cin >> u >> v;
        DSU_1.unionSet(u, v);
    }
    for(int i=0; i < m2; i++){
        int u, v; cin >> u >> v;
        DSU_2.unionSet(u, v);
    }

    // Solution
    int h = 0;
    vector<pair<int,int>> ans;
    for(int i=1; i <= n; i++){
        for(int j = i+1; j <= n; j++){
            if((DSU_1.isSameSet(i, j) != true) && (DSU_2.isSameSet(i, j) != true)){
                h++;
                DSU_1.unionSet(i, j);
                DSU_2.unionSet(i, j);
                ans.push_back({i, j});
            }
        }
    }

    // O/P
    cout << h << endl;
    for(int i=0; i < h; i++){ cout << ans[i].first << " " << ans[i].second << endl;}
}