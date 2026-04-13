// Correct.

// D. Cutting a graph
// https://codeforces.com/edu/course/2/lesson/7/1/practice/contest/289390/problem/D




































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
    int n, m, k; cin >> n >> m >> k;
    for(int i=0; i < m; i++){ int u, v; cin >> u >> v;}
    vector<pair<string, pair<int,int>>> queries(k);
    for(int i=0; i < k; i++){
        string temp; cin >> temp;
        int a, b; cin >> a >> b;
        queries[i] = {temp, {a, b}};
    }

    // Solution
    UnionFind DSU(n);
    vector<bool> ans;
    for(int i = k-1; i >= 0; i--){
        if(queries[i].first == "ask"){
            ans.push_back(DSU.isSameSet(queries[i].second.first, queries[i].second.second));
        }
        else{
            DSU.unionSet(queries[i].second.first, queries[i].second.second);
        }
    }

    // O/P
    reverse(ans.begin(), ans.end());
    for(int i=0; i < ans.size(); i++){
        if(ans[i] == true){ cout << "YES" << endl;}
        else{ cout << "NO" << endl;}
    }
}