// Correct.

// 1976. Number of Ways to Arrive at Destination
// https://leetcode.com/problems/number-of-ways-to-arrive-at-destination/description/




































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution {
public:
    const int MOD = 1e9+7;

    vector<long long> dijkstra(long long n, vector<vector<pair<long long,long long>>>& adj_List_1, long long source){ // O(n + m)
        vector<long long> Distance(n, 1e15);
        priority_queue<pair<long long,long long>, vector<pair<long long,long long>>, greater<>> pq;

        Distance[source] = 0;
        pq.push({0, source}); // (distance, node)

        while(!pq.empty()){
            long long current_Distance = pq.top().first;
            long long u = pq.top().second;
            pq.pop();

            // Used as Visited array (↓)
            if(current_Distance > Distance[u]){ continue;}

            for(auto &neighbour : adj_List_1[u]){
                long long v = neighbour.first;       // Neighbour node
                long long weight = neighbour.second; // Edge weight

                if((Distance[u] + weight) < Distance[v]){
                    Distance[v] = Distance[u] + weight;
                    pq.push({Distance[v], v});
                }
            }
        }

        return Distance;
        // TC = O((n + m) * log(n))
    }

    void func(vector<long long>& vec, vector<vector<pair<long long, long long>>>& adj, vector<long long>& min_Dist, vector<int>& DP){
        for(int i=0; i < vec.size(); i++){
            long long node = vec[i];
            for(auto &neighbour : adj[node]){
                long long v = neighbour.first;       // Neighbour node
                long long weight = neighbour.second; // Edge weight

                if((min_Dist[node] + weight) == min_Dist[v]){
                    DP[v] += DP[node];
                    DP[v] %= MOD;
                }
            }
        }
    }

    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<long long, long long>>> adj(n);
        for(int i=0; i < roads.size(); i++){
            int u = roads[i][0], v = roads[i][1], time = roads[i][2];
            adj[u].push_back({v, time});
            adj[v].push_back({u, time});
        }

        vector<long long> min_Dist = dijkstra(n, adj, 0);
        
        vector<pair<long long, long long>> vec;
        for(int i=0; i < n; i++){
            vec.push_back({min_Dist[i], i});
        }
        sort(vec.begin(), vec.end());

        vector<long long> new_Vec;
        for(int i=0; i < n; i++){
            long long node = vec[i].second;
            new_Vec.push_back(node);
        }

        vector<int> DP(n, 0);
        DP[0] = 1;
        func(new_Vec, adj, min_Dist, DP);

        int ans = DP[n-1];
        return ans;
    }
};