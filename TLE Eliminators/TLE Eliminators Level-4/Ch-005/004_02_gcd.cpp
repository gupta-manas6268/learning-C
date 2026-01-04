// (This Quiz is modified from '004_01_Min_Distance.cpp'.
//   In code everything is same instead of 'min' 
//   everywhere we are doing 'gcd'.)

// (All changed lines are given by '// Changed'.)

// Find GCD value on Path? (Each node-i have value arr[i])





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;


const int N = 2e5 + 1, M = 20;

vector<int> adjacency_List[N];
int depth[N], arr[N];
pair<int,int> Parent[N][M];

void dfs(int cur, int par){ // O(n*log(n))
    for(int i=0; i < M; i++){
        Parent[cur][i] = {0, 0}; // Changed
    }
    depth[cur] = depth[par] + 1;
    Parent[cur][0] = {par, __gcd(arr[cur], arr[par])};
    for(int j=1; j < M; j++){
        Parent[cur][j] = {Parent[Parent[cur][j-1].first][j-1].first,
                           __gcd(Parent[Parent[cur][j-1].first][j-1].second, Parent[cur][j-1].second)}; // (Changed)
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs(x, cur);}
    }
}

int Min_Distance(int u, int v){ // O(log(n))
    if(u == v){ return u;}
    if(depth[u] < depth[v]){ swap(u, v);}

    int Min = __gcd(arr[u], arr[v]), diff = (depth[u] - depth[v]); // Changed
    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if((diff >> j) & 1){ 
            u = Parent[u][j].first;
            Min = __gcd(Min, Parent[u][j].second); // Changed
        }
    }

    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if(Parent[u][j].first != Parent[v][j].first){
            Min = __gcd({Parent[u][j-1].second, Parent[v][j-1].second, Min}); // Changed
            u = Parent[u][j].first;
            v = Parent[v][j].first;
        }
    }

    return (u != v ? min(Min, Parent[u][0].second) : Min);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, q; cin >> n >> q;
    for(int i=1; i <= n; i++){ cin >> arr[i];}
    for(int i=2; i <= n; i++){
        int x; cin >> x;
        adjacency_List[x].push_back(i);
    }

    // Solution
    arr[0] = INT_MAX;
    for(int i=0; i < M; i++){ Parent[0][i] = {0, 0};}; // Changed
    // As, gcd(anything, 0) = 0                 (↑)

    dfs(1, 1); 
    for(int i=0; i < q; i++){
        int a, b; cin >> a >> b; // I/P

        // O/P
        cout << Min_Distance(a, b) << endl;
    }

    // TC = O(n*log(n) + q*log(n))
    // SC = O(n*log(n))


    // I/P
    // 5 4
    // 3 6 1 4 2 (=> arr[i])
    // 1 1 3 3
    // 4 5
    // 2 5
    // 1 3
    // 1 2
}