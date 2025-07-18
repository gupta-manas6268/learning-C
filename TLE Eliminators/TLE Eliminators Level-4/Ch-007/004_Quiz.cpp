// Quiz-3: You are standing at node A in the graph and you want
//           to reach node B. There is an enemy at node C who 
//      can block you from reaching B. Before you start your 
//      journey from A to B, you have to inform enemy about 
//      the path you’re going to take. Find out if it is possible 
//      to reach B from A without getting blocked by enemy. The 
//      enemy can block you by reaching a node in your decided 
//      path before you reach it.



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& adj_List_1, int source){ // O(n + m)
    // Works like BFS.
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


bool can_Reach_Safely(int n, vector<vector<pair<int, int>>>& adj_List_1, int A, int B, int C){
    vector<int> dist(n + 1, INF), dist_From_C = dijkstra(n, adj_List_1, C);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    dist[A] = 0; pq.push({0, A});

    while(!pq.empty()){
        int Current_Dist = pq.top().first;
        int u = pq.top().second;
        pq.pop();

        if(u == B){ return true;} // Reached B safely

        for(auto& neighour : adj_List_1[u]){
            int v = neighour.first;
            int weight = neighour.second;

            // Only explore if A can reach v before C
            if(((dist[u] + weight) < dist[v]) && ((dist[u] + weight) < dist_From_C[v])){
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }

    return false; // Could not reach B
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}