// Correct.
// (This is Mentor's code.)

// D. Greg and Graph
// https://codeforces.com/contest/296/problem/D



































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

    // I/P
    int n; cin >> n;
    vector<vector<int>> dist(n, vector<int>(n));
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){ cin >> dist[i][j];}
    }
    vector<int> order(n);
    for(int i = n-1; i >= 0; i--){ cin >> order[i], order[i]--;}
    
    // Solution
    vector<int> ans(n);
    for(int k=0; k < n; k++){
        for(int i=0; i < n; i++){
            for(int j=0; j < n; j++){
                int u = order[i], v = order[j], m = order[k];
                dist[u][v] = min(dist[u][v], dist[u][m] + dist[m][v]);
                if((i <= k) && (j <= k)){ ans[k] += dist[u][v];}
            }
        }
    }

    // O/P
    for(int i = n-1; i >= 0; i--){ cout << ans[i] << " ";}
}