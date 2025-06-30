// 

// E. Gardener and Tree
// https://codeforces.com/problemset/problem/1593/E



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

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, k; cin >> n >> k;
        vector<vector<int>> adjacency_List(n+1);
        for(int i=0; i < n-1; i++){
            int u, v; cin >> u >> v;

            adjacency_List[u].push_back(v);
            adjacency_List[v].push_back(u);
        }

        // Solution
        for(int i=1; i <= n; i++){
            sort(adjacency_List[i].begin(), adjacency_List[i].end());
        }

        vector<pair<int,int>> size_node;
        for(int i=1; i <= n; i++){
            int size = adjacency_List[i].size();
            size_node.push_back({size, i});
        }
        sort(size_node.begin(), size_node.end());

        vector<pair<int,int>> node_index;
        for(int index=0; index < size_node.size(); index++){
            node_index.push_back({size_node[index].second, index});
        }
        sort(node_index.begin(), node_index.end());

        vector<int> temp;
        for(int i=0; i < size_node.size(); i++){
            temp.push_back(size_node[i].first);
        }

        while(k > 0){
            int index = upper_bound(temp.begin(), temp.end(), 1) - temp.begin();
            for(int i=0; i < index; i++){
                int node = size_node[i].second;
                int val = adjacency_List[node][0];
                
                int index = lower_bound(adjacency_List[node].begin(), adjacency_List[node].end(), val) - adjacency_List[node].begin();
                adjacency_List[node].erase(adjacency_List[node].begin() + index);

                int Node_index = lower_bound()
            }
            
            k--;
        }
    }
}