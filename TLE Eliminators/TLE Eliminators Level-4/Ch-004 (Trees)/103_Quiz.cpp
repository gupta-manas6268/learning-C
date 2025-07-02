// Correct.
// This is My version of Mentor's code.

// D. 13th Labour of Heracles
// https://codeforces.com/problemset/problem/1466/D



































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
        int n; cin >> n;
        vector<int> weight(n+1);
        for(int i=1; i <= n; i++){
            int temp; cin >> temp;
            weight[i] = temp;
        }
        vector<vector<int>> Adjacency_List(n+1);
        for(int i=0; i < n-1; i++){
            int u, v; cin >> u >> v; // 'u' & 'v' => Edge List.

            Adjacency_List[u].push_back(v); // Both lines convert Uni-directional
            Adjacency_List[v].push_back(u); // edges in tree to bi-directional &
                            // stored in 1-based indexing.
        }

        // Solution
        vector<pair<int,int>> weight_degree;
        for(int i=1; i <= n; i++){
            if(Adjacency_List[i].size() > 1){
                weight_degree.push_back({weight[i], Adjacency_List[i].size()-1});
            }
        }

        int sum_weight = 0;
        for(int i=1; i <= n; i++){
            sum_weight += weight[i];
        }

        vector<int> ans;
        ans.push_back(sum_weight);
        
        sort(weight_degree.begin(), weight_degree.end());
        while(weight_degree.size() > 0){ // O(n)
            int Size = weight_degree.size();
            weight_degree[Size-1].second--;
            
            sum_weight += weight_degree[Size-1].first;
            ans.push_back(sum_weight);
            
            if(weight_degree[Size-1].second == 0){
                weight_degree.erase(weight_degree.end()-1); // Remove Last element.
            }
        }

        // O/P
        for(int i=0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << endl;

        // TC = O(n).
        // SC = O(n).
    }
}