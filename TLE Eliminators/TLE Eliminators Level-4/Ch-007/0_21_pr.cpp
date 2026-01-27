// Correct.
// (I solved it with the help of Chat-GPT.)

// Flight Discount
// https://cses.fi/problemset/task/1195



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dijkstra(int n, vector<vector<int>>& adj_List_1, map<pair<int,int>, int> cost, int source){ // O(n + m)
    vector<int> Distance(n + 1, INF);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    Distance[source] = 0;
    pq.push({0, source}); // (distance, node)

    while(!pq.empty()){
        int current_Distance = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        // Used as Visited array (↓)
        if(current_Distance > Distance[u]){ continue;}

        for(auto &neighbour : adj_List_1[u]){
            int v = neighbour;       // Neighbour node
            int weight = cost[{u, neighbour}]; // Edge weight

            if((Distance[u] + weight) < Distance[v]){
                Distance[v] = Distance[u] + weight;
                pq.push({Distance[v], v});
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
    vector<vector<int>> adj_1(n+1), adj_2(n+1);
    map<pair<int,int>, int> cost_1, cost_2;
    vector<pair<int,int>> edges;
    for(int i=0; i < m; i++){
        int a, b, c; cin >> a >> b >> c;
        if(cost_1[{a, b}] != 0){
            cost_1[{a, b}] = min(cost_1[{a, b}], c);
            cost_2[{b, a}] = min(cost_2[{b, a}], c);
        }
        else{
            adj_1[a].push_back(b);
            adj_2[b].push_back(a);
            cost_1[{a, b}] = c;
            cost_2[{b, a}] = c;
            edges.push_back({a, b});
        }
    }

    // Solution
    vector<int> dist_from_Source = dijkstra(n, adj_1, cost_1, 1);
    vector<int> dist_from_Destination = dijkstra(n, adj_2, cost_2, n);

    int full_Dij = dist_from_Source[n];
    int min_Dist = full_Dij; 
    for(int i=0; i < edges.size(); i++){
        int u = edges[i].first, v = edges[i].second;
        int temp_dist = (dist_from_Source[u] + (cost_1[{u, v}]/ 2) + dist_from_Destination[v]);
        min_Dist = min(min_Dist, temp_dist);
    }

    // O/P
    cout << min_Dist << endl;
}