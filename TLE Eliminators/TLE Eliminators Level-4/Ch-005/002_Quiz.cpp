// (This Quiz starts from Slide-1, Page-10)
// Calculate LCA?


// Correct.
// (This is Mentor's logic & code.)

// Company Queries II
// https://cses.fi/problemset/task/1688































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// From code '101_02_Quiz.cpp' (↓)
const int N = 2e5 + 1, M = 20;
// log(N) ≈ 20, that's why M = 20

vector<int> adjacency_List[N];
int depth[N], Parent[N][M];

void dfs(int cur, int par){ // O(n*log(n))
    depth[cur] = depth[par] + 1;
    Parent[cur][0] = par;
    for(int j=1; j < M; j++){
        Parent[cur][j] = Parent[Parent[cur][j-1]][j-1];
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs(x, cur);}
    }
}
// From code '101_02_Quiz.cpp' (↑)

int LCA(int u, int v){ // O(log(n))
    if(u == v){ return u;}
    if(depth[u] < depth[v]){ swap(u, v);}

    int diff = (depth[u] - depth[v]);
    for(int j = M-1; j >= 0; j--){ // O(log(n))
    // We are doing Binary-Search
        if((diff >> j) & 1){ u = Parent[u][j];}
    }

    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if(Parent[u][j] != Parent[v][j]){
            u = Parent[u][j];
            v = Parent[v][j];
        }
    }

    return (u != v ? Parent[u][0] : u);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, q; cin >> n >> q;
    for(int i=2; i <= n; i++){
        int x; cin >> x;
        adjacency_List[x].push_back(i);
    }

    // Solution
    dfs(1, 0);
    for(int i=0; i < q; i++){
        int a, b; cin >> a >> b; // I/P

        // O/P
        cout << LCA(a, b) << endl;
    }

    // TC = O(n*log(n) + q*log(n))
    // SC = O(n*log(n))
}