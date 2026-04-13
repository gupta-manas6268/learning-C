// Correct.
// (I solved it with the help of Hint.)

// F. Maximum White Subtree
// https://codeforces.com/contest/1324/problem/F



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int N = 2e5+1;
vector<int> a(N);
vector<vector<int>> adjacency_List(N);
void dfs(int node, int parent, vector<int>& a, vector<int>& max_Val){
    max_Val[node] += a[node];
    for(auto &i : adjacency_List[node]){
        if(i != parent){
            dfs(i, node, a, max_Val);
            // max_Val[node] += max(0,  max_Val[i]); 
            // Error, as      (int)(↑)    (↑)((long long) => by Line-12)
            // So, due to type mismatch it is giving error.
            max_Val[node] += max((long long)(0), max_Val[i]);
        }
    }
};

void re_Root(int node, int parent, int ans, vector<int>& max_Val, vector<int>& DP){
    DP[node] = ans;
    for(auto &i : adjacency_List[node]){
        if(i != parent){
            // max_Val[node] -= max((long long)0, max_Val[i]); 
            // Wrong, as changing value of 'max_Val' can give wrong answer.
            int temp_max_Val_node = (max_Val[node] - max((long long)(0), max_Val[i]));
            max_Val[i] += max((long long)0, temp_max_Val_node);
            re_Root(i, node, max_Val[i], max_Val, DP);
        }
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    for(int i=1; i <= n; i++){ 
        cin >> a[i];
        if(a[i] == 1){ a[i] = 1;}
        else{ a[i] = -1;}
    }
    for(int i=0; i < n-1; i++){
        int u, v; cin >> u >> v;
        adjacency_List[u].push_back(v);
        adjacency_List[v].push_back(u);
    }

    // Solution
    vector<int> max_Val(n+1, 0), DP(n+1, 0);
    dfs(1, 0, a, max_Val);
    re_Root(1, 0, max_Val[1], max_Val, DP);

    // O/P
    for(int i=1; i <= n; i++){ cout << DP[i] << " ";}
    cout << endl;
}