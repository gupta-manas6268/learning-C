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

vector<vector<int>> kruskal(int n, vector<vector<int>>& edges){
    vector<vector<int>> MST;
    UnionFind DSU(n);
    // edges[i] = {u, v, weight}; // Node b/w u & v.
    sort(edges.begin(), edges.end(), // Sort be weight
          [](auto &l, auto &r) {return l[2] < r[2];});
    for(auto &edge : edges){
        int u = edge[0], v = edge[1], weight = edge[2];
        if(DSU.isSameSet(u, v) == true){ continue;}
        DSU.unionSet(u, v);
        MST.push_back(edge);
    }

    return MST;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}