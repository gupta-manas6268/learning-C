// (This Quiz starts from Slide-1, Page-18)
// Find min. value on Path? (Each node-i have value arr[i])

// Similarly you can also solve, 'Find max. value on Path?'
//  by putting 'max' everywhere we put 'min' & some more
//  changes.



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
        Parent[cur][i] = {0, INT_MAX};
    }
    depth[cur] = depth[par] + 1;
    Parent[cur][0] = {par, min(arr[cur], arr[par])};
    for(int j=1; j < M; j++){
        Parent[cur][j] = {Parent[Parent[cur][j-1].first][j-1].first,
                           min(Parent[Parent[cur][j-1].first][j-1].second, Parent[cur][j-1].second)};
    }
    for(auto x : adjacency_List[cur]){
        if(x != par){ dfs(x, cur);}
    }
}

int Min_Distance(int u, int v){ // O(log(n))
    if(u == v){ return u;}
    if(depth[u] < depth[v]){ swap(u, v);}

    int Min = min(arr[u], arr[v]), diff = (depth[u] - depth[v]);
    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if((diff >> j) & 1){ 
            u = Parent[u][j].first;
            Min = min(Min, Parent[u][j].second);
        }
    }

    for(int j = M-1; j >= 0; j--){ // O(log(n))
        if(Parent[u][j].first != Parent[v][j].first){
            Min = min({Parent[u][j-1].second, Parent[v][j-1].second, Min});
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
    for(int i=0; i < M; i++){ Parent[0][i] = {0, INT_MAX};};

    dfs(1, 1); // This line is Changed from Previous code.
    //    (↑) Changed
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