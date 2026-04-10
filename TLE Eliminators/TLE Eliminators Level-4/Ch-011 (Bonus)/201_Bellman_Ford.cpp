#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Debugging Checklist:
// 1. Edge cases
// 2. Overflow
// 3. Wrong loops
// 4. Something you normally repeat, etc.


// Solution
vector<int> bellman_ford(int n, int source, vector<vector<int>>& edges){
// Bellman Ford & Floyd Warshall works for -ve edge, which dijkstra didn't
    vector<int> dist(n, INF);
    dist[source] = 0;
    for(int i=0; i < n; i++){ // O(V * E)
        bool any = false;
        for(auto &edge : edges){ // O(E)
            int u = edge[0], v = edge[1], wt = edge[2]; // wt => weight
            if((dist[u] + wt) < dist[v]){
                dist[v] = dist[u] + wt;
                any = true;
            }
        }
        if(!any){ break;}
        if(i == (n-1)){ return {};} // -ve cycle
    }
    return dist;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        
    }
}