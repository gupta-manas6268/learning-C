// (Binary Lifting)



// Correct.
// (This is Mentor's logic & code. So, write logic
//   & think about whether to write code or not.)


// Company Queries I
// https://cses.fi/problemset/task/1687





























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

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

int Kth_Parent(int u, int k){ // O(log(n))
    for(int i = M-1; i >= 0; i--){   // Both lines  (MSB to LSB)
    // for(int i = 0; i <= M-1; i--){ // work well. (LSB to MSB)
    // (MSB => Most Significant Bit)
    // (LSB => Least Significant Bit)
        if((1 << i) & k){ u = Parent[u][i];}
    }

    return u;
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
        int u, k; cin >> u >> k; // I/P
        int parent = Kth_Parent(u, k);

        // O/P
        cout << (parent == 0 ? -1 : parent) << endl;
    }

    // TC = O(n*log(n) + q*log(n))
    // TC = O(n*log(n))
}