// Wrong (TLE)
// This is Mentor's code.

// E. Round Dance
// https://codeforces.com/contest/1833/problem/E



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int node, vector<vector<int>> adj_List_1, vector<int> &visited, bool &has_Leaf_Node){
    if(adj_List_1[node].size() == 1){
        has_Leaf_Node = true;
    }
    visited[node] = 1;

    for(auto child : adj_List_1[node]){
        if(visited[child]){
            continue;
        }
        DFS(child, adj_List_1, visited, has_Leaf_Node);
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
        int n; cin >> n;
        vector<vector<int>> adj_List_1(n+1);
        for(int i=1; i <= n; i++){
            int a; cin >> a;

            adj_List_1[i].push_back(a);
            adj_List_1[a].push_back(i);
        }

        // Solution
        for(int i=1; i <= n; i++){
            if(adj_List_1[i].size() == 0){
                continue;
            }

            sort(adj_List_1[i].begin(), adj_List_1[i].end());
            adj_List_1[i].resize(unique(adj_List_1[i].begin(), adj_List_1[i].end()) - adj_List_1[i].begin());
            // unique => Removes duplicate element from Vector.
            // [1 2 2 2 3 3 4] -> [1 2 3 4 - - -] -> [1 2 3 4]
        }

        vector<int> Visited(n+1);

        int count_Cycles = 0, count_Branches = 0;
        // count_Branches => No. of Connected components 
        //                  with atleast 1-leaf node.
        // count_Cycles   => No. of Connected components 
        //                  which are Cycle.
        for(int i = 1; i <= n; i++){
            if(Visited[i]){
                continue;
            }

            bool has_Leaf_Node = false;
            DFS(i, adj_List_1, Visited, has_Leaf_Node);

            if(has_Leaf_Node){
                count_Branches++;
            }
            else{
                count_Cycles++;
            }
        }

        // O/P
        int One = 1;
        // int min_Cycles = (count_Cycles + min(count_Branches, 1)); // Error
        int min_Cycles = (count_Cycles + min(count_Branches, One));
        int max_Cycles = (count_Cycles + count_Branches);
        cout << min_Cycles << " " << max_Cycles << endl;

        // TC = O(n * n)   => (TLE)
    }
}