// Correct.
// (This is Mentor's code.)

// A. Fair
// https://codeforces.com/problemset/problem/986/A





// (Hint: Given below.)






















// (See Hints in 'TLE-Eliminators' website & s,k <= 100,
//   So, we can calculate for each 'k' which is small,
//   instead of each node.)






















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

    // I/P
    int n, m, k, s; cin >> n >> m >> k >> s;
    vector<vector<int>> goods(k);
    for(int i=0; i < n; i++){
        int a; cin >> a;
        goods[a-1].push_back(i);
    }
    vector<vector<int>> adj(n);
    for(int i=0; i < m; i++){
        int u, v; cin >> u >> v;
        u--; v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    // Solution
    vector<vector<int>> smallest_Path_Value_To_Reach_Towns(n, vector<int> (k));
    for(int good_Type = 0; good_Type < k; good_Type++){ // O(s*n + s*(n+m)) = 10^7
        queue<int> q;
        vector<int> dist(n, INT_MAX);
        for(auto node : goods[good_Type]){
            q.push(node);
            dist[node] = 0;
        }
        while(!q.empty()){ // O(n + m)
            auto node = q.front();
            q.pop();
            for(auto child : adj[node]){
                if(dist[child] > (dist[node] + 1)){
                    dist[child] = (dist[node] + 1);
                    q.push(child);
                }
            }
        }
        for(int i=0; i < n; i++){ // O(n)
            smallest_Path_Value_To_Reach_Towns[i][good_Type] = dist[i];
        }
    }

    // O/P
    vector<int> ans;
    for(auto &it : smallest_Path_Value_To_Reach_Towns){
        sort(it.begin(), it.end()); // O(n*100 * log(100)) = 10^7 * 6
        int sum = 0;                // 100 = s-max.
        for(int i=0; i < s; i++){ sum += it[i];}
        ans.push_back(sum);
    }
    for(int i=0; i < ans.size(); i++){ cout << ans[i] << " ";}
    cout << endl;
}