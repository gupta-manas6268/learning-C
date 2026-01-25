// (Slide-1, Page-24.)

// Correct.
// (This is Mentor's code.)

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

vector<int> Path(int n, vector<vector<pair<int,int>>>& adj_List_1, int source, int destination){ // O(n + m)
    vector<int> Distance(n + 1, INF), Parent(n+1, -1);
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
                Parent[v] = u;
                pq.push({Distance[v], v});
            }
        }
    }

    vector<int> path;
    int v = destination;
    while(v != -1){
        path.push_back(v);
        v = Parent[v];
    }
    reverse(path.begin(), path.end());

    return path;
    // TC = O(n + m)
}


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}