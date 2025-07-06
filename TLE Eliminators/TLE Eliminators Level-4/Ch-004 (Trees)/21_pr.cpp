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
        vector<int> node_key(n+1, 0);
        map<int, pair<int,int>> key_edges;
        for(int i=0; i < n-1; i++){
            int u, v; cin >> u >> v;

            adjacency_List[u].push_back(v);
            adjacency_List[v].push_back(u);

            int key_1 = u + (v * (1e6 + 1));
            key_edges[key_1] = {u, v};
            int key_2 = v + (u * (1e6 + 1));
            key_edges[key_2] = {v, u};

            node_key[u] += key_1;
            node_key[v] += key_2;
        }

        // Solution
        int ans;
        if(n == 1){
            ans = 0;
        }
        else{
            vector<pair<int,int>> Size_node;
            for(int i=1; i <= n; i++){
                Size_node.push_back({adjacency_List[i].size(), i});
            }
            
            while(k > 0){
                int Size = Size_node.size();
                ans = Size;
                if(Size == 0){
                    break;
                }
                sort(Size_node.begin(), Size_node.end(), greater<int>());

                vector<int> node_index(n+1);
                for(int i=0; i < Size; i++){
                    int node = Size_node[i].second;
                    node_index[node] = i;
                }

                if((Size == 1) || (Size == 2)){
                    Size_node.clear();
                }
                else{
                    for(int i = Size_node.size()-1; i >= 0; i--){
                        if(Size_node[i].first <= 1){
                            int first_node = Size_node[i].second;
                            int key_11 = node_key[first_node];
                            int second_node = key_edges[key_11].second;

                            int key_12 = second_node + (first_node * (1e6 + 1));
                            node_key[first_node] = 0;
                            node_key[second_node] -= key_12;
                            int index = node_index[second_node];

                            Size_node[index].first--;
                        }
                    }
                }
                k--;
            }
        }

        // O/P
        cout << ans << endl;
    }
}