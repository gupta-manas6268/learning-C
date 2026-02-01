// Correct.
// (This is Mentor's code.)

// D. Shichikuji and Power Grid
// https://codeforces.com/problemset/problem/1245/D



































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
    int n; cin >> n;
    vector<pair<int,int>> coor(n+1); // coor => coordinates
    for(int i=1; i <= n; i++){
        int x, y; cin >> x >> y;
        coor[i] = {x, y};
    }
    vector<int> cost(n+1), k(n+1);
    for(int i=1; i <= n; i++){ cin >> cost[i];}
    for(int i=1; i <= n; i++){ cin >> k[i];}

    // Solution
    vector<pair<array<int, 2>, long long>> edges;
    // edges = {{u, v}, weight};
    //  u & v nodes, weight => Cost of making Power plant at that node.
    for(int i=1; i <= n; i++){ edges.push_back({{0, i}, cost[i]});}
    // (We take hypothetical node-0 & Connect   (↑) 0 & i, & take 
    //   connection cost at 'cost[i]'. So, we can use MST.)

    for(int u=1; u <= n; u++){
        for(int v=1; v <= n; v++){
            if(u == v){ continue;}
            int weight = (k[u] + k[v]) * 
                           (abs(coor[u].first - coor[v].first) + abs(coor[u].second - coor[v].second));
            edges.push_back({{u, v}, weight});
        }
    }
    sort(edges.begin(), edges.end(),
          [](auto l, auto r){ return l.second < r.second;});
    

    UnionFind DSU(n+1);
    int Cost = 0;
    vector<int> stations;
    vector<array<int, 2>> connections;

    // Using kruskal's algo.
    for(auto edge : edges){
        int u = edge.first[0], v = edge.first[1], weight = edge.second;
        if(DSU.isSameSet(u, v)){ continue;}
        DSU.unionSet(u, v);
        Cost += weight;
        if(u == 0){ stations.push_back(v);}
        else{ connections.push_back({u, v});}
    }

    // O/P
    cout << Cost << endl;
    cout << stations.size() << endl;
    for(int x : stations){ cout << x << " ";}
    cout << endl << connections.size() << endl;
    for(auto connection : connections){ 
        cout << connection[0] << " " << connection[1] << endl;
    }
}