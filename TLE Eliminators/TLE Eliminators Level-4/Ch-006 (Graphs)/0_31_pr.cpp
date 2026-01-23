// Correct.
// (I solved it with the help of Hints.)

// D. Secret Passwords
// https://codeforces.com/problemset/problem/1263/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int node, vector<vector<int>>& adj_List_1, vector<int>& visited, vector<int>& ans){ // O(n+m)
    visited[node] = 1;
    ans.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, visited, ans);
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

    // I/P
    int n; cin >> n;
    vector<string> s(n);
    for(int i=0; i < n; i++){ cin >> s[i];}

    // Solution
    vector<vector<int>> adj(n+26+1);
    for(int i=0; i < n; i++){
        for(int j=0; j < s[i].length(); j++){
            int temp_1 = (s[i][j]-'a'+1);
            int temp_2 = i+26+1;
            adj[temp_1].push_back(temp_2);
            adj[temp_2].push_back(temp_1);
        }
    }

    vector<int> visited(n+26+1, 0);
    int ans = 0;
    for(int i=1; i <= 26; i++){
        if(visited[i] == 0){
            vector<int> Path;
            DFS(i, adj, visited, Path);
            if(Path.size() > 1){ ans++;}
        }
    }

    // O/P
    cout << ans << endl;
}