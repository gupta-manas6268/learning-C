// Correct.
// This is Mentor's code.

// (No need to write code & logic.)

// D. Beautiful Graph
// https://codeforces.com/contest/1093/problem/D

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}

void DFS(int node, vector<vector<int>> &adj_List_1, int parent, vector<int>& colour, bool &is_Bipartite, int &count_Black, int &count_White){
    colour[node] = (colour[parent] ^ 1);

    if(colour[node] == 0){ count_Black++;}
    else{ count_White++;}

    for(auto child : adj_List_1[node]){
        if(colour[child] != -1){
            if(colour[child] == colour[node]){
                is_Bipartite = false; break;
            }
            continue;
        }
        DFS(child, adj_List_1, node, colour, is_Bipartite, count_Black, count_White);
    }
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
        int n, m; cin >> n >> m;
        vector<vector<int>> adj_List_1(n+1);
        for(int i=0; i < m; i++){
            int u, v; cin >> u >> v;
            adj_List_1[u].push_back(v);
            adj_List_1[v].push_back(u);
        }

        // Solution
        vector<int> colour(n+1, -1);
        colour[0] = 0; // 0 => Parent of Root.

        int ans = 1;

        for(int i = 1; i <= n; i++){
            if(colour[i] != -1){ continue;}

            bool is_Bipartite = true;
            int count_Black = 0, count_White = 0;

            DFS(i, adj_List_1, 0, colour, is_Bipartite, count_Black, count_White);

            ans *= is_Bipartite;

            int temp = (power(2, count_White) + power(2, count_Black)) % MOD;
            ans *= temp;
            ans %= MOD;
        }

        // O/P
        cout << ans << endl;
    }
}