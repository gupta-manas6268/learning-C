// Correct.
// https://www.geeksforgeeks.org/problems/implementing-dijkstra-set-1-adjacency-matrix/1







#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    // Function to find shortest distance of all vertices from
    // source vertex S.
    vector<int> dijkstra(int V, vector<vector<int>> adj[], int S){
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;
        vector<int> distance(V);
        for(int i=0; i < V; i++){
            distance[i] = 1e9;  // 1e9 => infinity.
        }

        distance[S] = 0;
        pq.push({0, S});

        while(!pq.empty()){
            int dist = pq.top().first; // dist => distance.
            int node = pq.top().second;
            pq.pop();

            for(auto it: adj[node]){
                int edgeWeight = it[1];
                int adjNode = it[0];

                if(dist + edgeWeight < distance[adjNode]){
                    distance[adjNode] = dist + edgeWeight;
                    pq.push({distance[adjNode], adjNode});
                }
            }
        }

        return distance;
        // TC = E * log(V)
        //    E = no. of edges, V = no. of nodes.
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}