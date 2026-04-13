// Correct.
// (This is My code in 2nd-time, with only 1-bug
//  in Line-98.)

// (No need to write code & logic. => But just point
//   this bug out in Register (Don't write code. Only
//   point out the bug in this code.))

// D. Beautiful Graph
// https://codeforces.com/contest/1093/problem/D






























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353;
const int INF = LLONG_MAX >> 1;

// Power
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

bool is_Ans = true;
void DFS(int node, vector<vector<int>>& adj_List_1, int parent, vector<int>& visited, vector<int>& ans){ // O(n+m)
    if(parent == -1){ visited[node] = 1;}
    else if(visited[parent] == 2){ visited[node] = 1;}
    else if(visited[parent] == 1){ visited[node] = 2;}
    ans.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(visited[neighour] == visited[node]){ is_Ans = false; break;}
        if(visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, node, visited, ans);
        }
    }
    // TC = O(n+m)
    // SC = O(n)
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        is_Ans = true; // Correct, without this line. (Bug)
                       //  Code gives wrong answer.
        // I/P
        int n, m; cin >> n >> m;
        vector<vector<int>> adj(n+1);
        for(int i=1; i <= m; i++){
            int u, v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        // Solution
        int ans = 1;
        vector<int> visited(n+1, 0);
        for(int i=1; i <= n; i++){
            vector<int> Path;
            if(visited[i] == 0){
                DFS(i, adj, -1, visited, Path);
                if(is_Ans == false){ ans = 0; break;}

                int x = 0, y = 0;
                for(int i=0; i < Path.size(); i++){
                    if(visited[Path[i]] == 1){ x++;}
                    else{ y++;}
                }
                // ans += power(2, x);
                // ans %= MOD;
                // ans += power(2, y);
                // ans %= MOD;
                ans *= ((power(2, x) + power(2, y)) % MOD);
                ans %= MOD;
            }
        }

        // O/P
        cout << ans << endl;
        // TC = O(n)
        // SC = O(n)
    }
}