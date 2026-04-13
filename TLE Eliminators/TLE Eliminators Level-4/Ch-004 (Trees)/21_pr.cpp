// Correct.

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
        vector<set<int>> adjacency_List(n+1);
        for(int i=0; i < n-1; i++){
            int u, v; cin >> u >> v;
            adjacency_List[u].insert(v);
            adjacency_List[v].insert(u);
        }

        // Solution
        queue<int> Leaf;
        for(int i=1; i <= n; i++){
            if(adjacency_List[i].size() <= 1){ Leaf.push(i);}
        }

        int ans = n;
        while(k != 0){
            if(Leaf.size() == 0){ break;}
            
            queue<int> Leaf_2;
            while(Leaf.size() != 0){
                int node = Leaf.front();
                Leaf.pop();
                ans--;

                if(adjacency_List[node].size() == 1){
                    auto it = adjacency_List[node].begin();
                    int Node_2;
                    for(auto &it : adjacency_List[node]){
                        Node_2 = it;
                    }
                    auto it_2 = adjacency_List[Node_2].find(node);
                    adjacency_List[Node_2].erase(it_2);
                    if(adjacency_List[Node_2].size() <= 1){
                        Leaf_2.push(Node_2);
                    }
                }
            }
            Leaf = Leaf_2;
            k--;
        }

        // O/P
        if(ans <= 0){ ans = 0;}
        cout << ans << endl;
        // TC = O(tc * (n * log(n)))
        // SC = O(n)
    }
}