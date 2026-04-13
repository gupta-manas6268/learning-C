// Correct.

// D. Cycle Free Flow
// https://codeforces.com/gym/102694/problem/D




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
const int N = 3e5 + 1, M = 21;
// log(N) ≈ 20, that's why M = 20

vector<int> adjacency_List[N];
map<pair<int,int>, int> cost;
int level[N];
pair<int,int> Parent[N][M];

void dfs(int cur, int par){ // O(n*log(n))
// dfs(1, 0) => (Correct)
// dfs(1, -1) => (Wrong)
//  ((↑) As, for 'par = -1', I didn't mentioned 'if'
//   condition for edge cases.)
    level[cur] = level[par] + 1;
    Parent[cur][0].first = par;
    Parent[cur][0].second = cost[{cur, par}];
    for(int j=1; j < M; j++){
        Parent[cur][j].first = Parent[Parent[cur][j-1].first][j-1].first;
        Parent[cur][j].second = min(Parent[cur][j-1].second, Parent[Parent[cur][j-1].first][j-1].second);
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs(x, cur);}
    }
}

int Kth_Parent(int u, int k){ // O(log(n))
    int mini = 1e9+10;
    for(int i = M-1; i >= 0; i--){   
        if((1 << i) & k){ 
            mini = min(mini, Parent[u][i].second);
            u = Parent[u][i].first;
        }
    }

    return mini;
}

int LCA(int u, int v){ // O(log(n))
    if(u == v){ return u;}
    if(level[u] < level[v]){ swap(u, v);}

    int diff = (level[u] - level[v]);
    for(int j = M-1; j >= 0; j--){ // O(log(n))
    // We are doing Binary-Search
        if((diff >> j) & 1){ u = Parent[u][j].first;}
    }

    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if(Parent[u][j].first != Parent[v][j].first){
            u = Parent[u][j].first;
            v = Parent[v][j].first;
        }
    }

    return (u != v ? Parent[u][0].first : u);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, m; cin >> n >> m;
    for(int i=0; i < m; i++){
        int u, v, w; cin >> u >> v >> w;
        adjacency_List[u].push_back(v);
        adjacency_List[v].push_back(u);
        cost[{u, v}] = w;
        cost[{v, u}] = w;
    }

    // Solution
    dfs(1, 0);

    // O/P
    int q; cin >> q;
    for(int i=0; i < q; i++){
        int a, b; cin >> a >> b;

        // Solution
        int lca = LCA(a, b);
        int k_1 = (level[a] - level[lca]);
        int k_2 = (level[b] - level[lca]);

        // O/P
        int ans = min(Kth_Parent(a, k_1), Kth_Parent(b, k_2));
        cout << ans << endl;
    }
    // TC = O(n*log(n) + q*log(n))
    // SC = O(n*log(n))
}