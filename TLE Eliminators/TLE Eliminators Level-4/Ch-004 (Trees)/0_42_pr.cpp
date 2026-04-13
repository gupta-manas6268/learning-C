// Correct.
// (This is Mentor's code)

// A. Timofey and a tree
// https://codeforces.com/problemset/problem/763/A



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool dfs(int curr, vector<vector<int>>& edges, int curr_Parent, vector<int>& color, int &main_Node){ // O(n)
// Checks whether subtree in a tree have same color or not.
    bool ans = true;
    if((curr_Parent != main_Node) && (color[curr] != color[curr_Parent])){ return false;}
    for(auto child : edges[curr]){
        if(child != curr_Parent){
            ans = (ans & dfs(child, edges, curr, color, main_Node));
        }
    }
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<vector<int>> edges(n, vector<int>());
    vector<int> color(n,0);
    vector<pair<int,int>> p;
    for(int i=0; i < n-1; i++){ // 0-based indexing
        int u, v; cin >> u >> v;
        u--; v--;
        p.push_back({u,v});
        edges[u].push_back(v);
        edges[v].push_back(u);
    }
    for(int i=0; i < n; i++){ cin >> color[i];}

    // Solution
    for(auto it:p){
        int u = it.first, v = it.second;
        if(color[u] != color[v]){
            bool flag_1 = true, flag_2 = true;
            bool ans = true;
            for(auto i : edges[u]){ // Taking u-node as root
                if(i != v){
                    if(color[i] != color[u]){
                        flag_1 = false;
                    }
                    ans = (ans & dfs(i, edges, u, color, u));
                    //                       (main node)(↑)
                }
            }
            if(!ans){
                cout << "NO" << endl;
                return 0;
            }
            for(auto i : edges[v]){ // Taking u-node as root
                if(i != u){
                    if(color[i] != color[v]){
                        flag_2 = false;
                    }
                    ans = (ans & dfs(i, edges, v, color, v));
                    //                       (main node)(↑)
                }
            }
            if(!ans){
                cout << "NO" << endl;
                return 0;
            }
            if(!flag_1 && !flag_2){
                cout << "NO" << endl;
                return 0;
            }
            if(flag_1){
                cout << "YES" << endl;
                cout << v+1 << endl;
                return 0;
            }
            else{
                cout << "YES" << endl;
                cout << u+1 << endl;
                return 0;
            }
        }
    }
    // If we comes out of loop i.e. all nodes have
    //  same color. So, any node can be root. So,
    //  we take 1 as root.
    cout << "YES" << endl;
    cout << 1 << endl;

    // TC = O(n + n + n)
    // TC = O(n)
    // SC = O(n)
}