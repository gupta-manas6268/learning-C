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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // Solution
    function<void(int, int)> dfs = [&](int node, int parent){
        // in => in-time, out => out-time
        in[node] = time++; 
        for(auto &i : adj[node]){
            if(i != parent){ dfs(i, node);}
        }
        out[node] = time++;
    };
    dfs(1, -1);
    for(int i=1; i <= n; i++){
        euler[in[i]] = euler[out[i]] = val[i-1];
    }
}