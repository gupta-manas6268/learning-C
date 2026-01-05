// Correct.
// (This is Mentor's code.)

// (Write logic & Formula in Register & think about
//   whether to write code or not.)

// D. Tree XOR
// https://codeforces.com/problemset/problem/1882/D




// (Hint given below.)





















// Formula:
// ans[node] = ans[parent] + ((a[node] ^ a[parent]) * (n - (2 * sz[node])))

// if(x != y){ x^c != y^c} 
// if(x == y){ x^c == y^c}
// 
// So, if I take a subtree then all values in it are equal
//  only they are equal previously.    













#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        vector<vector<int>> adj(n+1); // adj => adjacency_List
        vector<int> a(n+1), subtree_Size(n+1, 0), ans(n+1), dp(n+1);
        for(int i=1; i <= n; i++){ cin >> a[i];}
        for(int i=0; i < n-1; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        // Solution

        // if(x != y){ x^c != y^c} 
        // if(x == y){ x^c == y^c}
        // 
        // So, if I take a subtree then all values in it are equal
        //  only they are equal previously.
        function<void(int, int)> dfs = [&](int node, int parent){
            subtree_Size[node] = 1;
            for(auto &i : adj[node]){
                if(i != parent){
                    dfs(i, node);
                    subtree_Size[node] += subtree_Size[i];
                    ans[node] += (ans[i] + ((a[i] ^ a[node]) * subtree_Size[i]));
                }
            }
        };


        function<void(int, int, int)> dfs_2 = [&](int node, int parent, int value){ // Correct.
            ans[node] = value;
            
            for(auto &i : adj[node]){
                if(i != parent){ dfs_2(i, node, value + ((a[i] ^ a[node]) * (n - (2 * subtree_Size[i]))));}
                // ans[node] = ans[parent] + ((a[node] ^ a[parent]) * (n - (2 * sz[node])))
                //          (sz => subtree_Size)
            }
        };
        
        // function<void(int, int, int)> dfs_2 = [&](int node, int parent, int value){ // Wrong.
        //     value += ((a[node] ^ a[parent]) * (n - (2 * subtree_Size[node])));
        //     ans[node] = value;
        // 
        //     for(auto &i : adj[node]){
        //         if(i != parent){ dfs_2(i, node, value);}
        //     }
        // };


        dfs(1, -1);
        dfs_2(1, -1, ans[1]);

        // O/P
        for(int i=1; i <= n; i++){ cout << ans[i] << " ";}
        cout << endl;
    }
}