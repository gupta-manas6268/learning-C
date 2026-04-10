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
vector<vector<int>> floyd_warshall(int n, vector<vector<int>>& edges){
    vector<vector<int>> dist(n, vector<int> (n, INF));
    for(int i=0; i < n; i++){ dist[i][i] = 0;}
    for(auto &edge : edges){ dist[edge[0]][edge[1]] = edge[2];}
    for(int k=0; k < n; k++){ // O(pow(V, 3))
        for(int i=0; i < n; i++){
            for(int j=0; j < n; j++){
                if((dist[i][k] != INF) && (dist[k][j] != INF)){
                    dist[i][j] = min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
    for(int i=0; i < n; i++){
        if(dist[i][i] < 0){ return {};} // -ve cycle
    }
    return dist;
    // TC = O(pow(V, 3))
    // SC = O(pow(V, 2))
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