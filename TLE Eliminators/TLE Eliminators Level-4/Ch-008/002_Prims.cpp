#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<vector<int>> prims(vector<vector<pair<int,int>>>& adj){
    int n = adj.size();
    vector<vector<int>> MST;
    vector<int> visited(n);
    vector<int> min_Cost(n, INT_MAX);
    priority_queue<vector<int>, vector<vector<int>>, greater<vector<int>>> pq;
    min_Cost[0] = 0;
    pq.push({0, 0, -1});
    while(!pq.empty()){
        int cost, u, p;
        cost = pq.top()[0], u = pq.top()[1], p = pq.top()[2];
        pq.pop();
        if(visited[u]){ continue;}
        visited[u] = 1;
        if(p != -1){ MST.push_back({p, u, cost});}

        for(auto vec : adj[u]){
            int v = vec.first, weight = vec.second;
            if(!visited[vec.first] && (weight < min_Cost[v])){
                min_Cost[v] = weight;
                pq.push({weight, v, u});
            }
        }
    }

    return MST;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}