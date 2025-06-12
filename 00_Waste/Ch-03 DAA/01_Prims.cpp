// Correct.
// https://www.geeksforgeeks.org/problems/minimum-spanning-tree/1


#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int spanningTree(int V, vector<vector<int>> adj[]){
        priority_queue<pair<int,int>, vector<pair<int,int>>, greater<pair<int,int>>> pq;

        vector<int> visited(V, 0);
        // {weight, node}
        pq.push({0, 0});
        int sum = 0;

        // E * log(E) + E * log(E)     // E = no. of edges.
        // TC = O(E * log(E)).
        while(!pq.empty()){

            // log(E)
            auto it = pq.top();
            pq.pop();
            int node = it.second;
            int weight = it.first;

            if(visited[node] == 1){ continue;}
            visited[node] = 1;
            sum += weight;

            // E*log(E)
            for(auto it: adj[node]){  // adj => adjacent.
                int adjNode = it[0];
                int edgeWeight = it[1];

                if(!visited[adjNode]){
                    pq.push({edgeWeight, adjNode});
                }
            }
        }

        return sum;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}