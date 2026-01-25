// (Slide-1, Page-24.)

// Correct.
// (This is My code in 2nd-time.)

// Quiz-1: Given a weighted undirected graph, find all 
//          nodes which lie on any one shortest path 
//          of the graph.


// '11_pr.cpp'

// C. Dijkstra?
// https://codeforces.com/problemset/problem/20/C


























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dijkstra(int source, vector<vector<pair<int,int>>>& adj_List_1, vector<int>& Parent, int n){ // O(n + m)
    // m => No. of Edges.

    // Works like BFS.
    vector<int> Distance(n + 1, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    Distance[source] = 0;
    pq.push({0, source}); // (distance, node)
    Parent[source] = -1;

    while(!pq.empty()){
        int current_Distance = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Used as Visited array (↓)
        if(current_Distance > Distance[u]){ continue;}

        for(auto &neighbour : adj_List_1[u]){
            int v = neighbour.first;       // Neighbour node
            int weight = neighbour.second; // Edge weight

            if((Distance[u] + weight) < Distance[v]){
                Distance[v] = Distance[u] + weight;
                pq.push({Distance[v], v});
                Parent[v] = u;
            }
        }
    }

    return Distance;
    // TC = O((n + m) * log(n))
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    vector<vector<pair<int,int>>> adj(n+1);
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        int val; cin >> val;
        adj[u].push_back({v, val});
        adj[v].push_back({u, val});
    }

    // Solution
    vector<int> Parent(n+1, 0);
    vector<int> Distance = dijkstra(1, adj, Parent, n);

    vector<int> Path;
    int temp = n;
    while(temp != -1){
        Path.push_back(temp);
        temp = Parent[temp];
    }
    reverse(Path.begin(), Path.end());

    // O/P
    for(int i=0; i < Path.size(); i++){ cout << Path[i] << " ";}
    cout << endl;
}