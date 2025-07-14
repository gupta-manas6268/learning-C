// Quiz-2: Finding shortest path from source to 
//          destination if you are allowed to
//          reduce the weight of any one edge in 
//          the graph to 50% of its currentweight.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& adj_List_1, int source){ // O((n + m) * log(m))
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
            int v = neighbour.first;       // Neighbour node
            int weight = neighbour.second; // Edge weight

            if((Distance[u] + weight) < Distance[v]){
                Distance[v] = Distance[u] + weight;
                pq.push({Distance[v], v});
            }
        }
    }

    return Distance;
}

int half_weight(int n, vector<vector<pair<int,int>>>& adj_List_1, int source, int destination){
    vector<int> dist_From_Source = dijkstra(n, adj_List_1, source);
    vector<int> dist_From_Destination = dijkstra(n, adj_List_1, destination);

    int min_Dist = dist_From_Source[destination];

    for(auto &edge : edges){
        int u, v, w;
        tie(u, v, w) = edge;

        int reduced_Weight = (w / 2);

        // Calculate distance if this edge is reduced
        int new_Dist = dist_From_Source[u] + reduced_Weight + dist_From_Destination[v];
        min_Dist = min(min_Dist, new_Dist);

        // Also consider edge in opposite direction
        new_Dist = dist_From_Source[v] + reduced_Weight + dist_From_Destination[u];
        min_Dist = min(min_Dist, new_Dist);
    }

    return min_Dist;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);


}