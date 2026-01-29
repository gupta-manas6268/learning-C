// Correct.
// (This is Mentor's code.)

// E. Rendez-vous de Marian et Robin
// https://codeforces.com/contest/2014/problem/E



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> dijkstra(int n, vector<vector<pair<int,int>>>& adj_List_1, int source){ // O(n + m)
    vector<int> Distance(2*n + 5, INF); // Changed Line from default Dijkstra
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
    // TC = O((n + m) * log(n))
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, m, h; cin >> n >> m >> h;
        vector<vector<pair<int,int>>> adj(2*n + 5);
        vector<int> horses(h);
        for(int i=0; i < h; i++){ cin >> horses[i];}
        for(int i=0; i < m; i++){
            int u, v, w; cin >> u >> v >> w;
            adj[2*u].push_back({2*v, w});
            adj[2*v].push_back({2*u, w});
            
            adj[2*u + 1].push_back({2*v + 1, w/2});
            adj[2*v + 1].push_back({2*u + 1, w/2});
        }

        // Solution
        for(int i=1; i <= n; i++){
            adj[2*i + 1].push_back({2*i, 0});
        }
        for(int i=0; i < h; i++){
            int x = horses[i];
            adj[2*x].push_back({2*x + 1, 0});
        }

        vector<int> a = dijkstra(n, adj, 2);
        vector<int> b = dijkstra(n, adj, 2*n);

        int ans = 1e14;
        for(int i=2; i <= (2*n + 1); i++){
            ans = min(ans, max(a[i], b[i]));
        }
        if(ans == 1e14){ ans = -1;}

        // O/P
        cout << ans << endl;
    }
}