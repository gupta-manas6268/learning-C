#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void DFS(int node, vector<vector<int>>& adj_List_1, vector<int>& visited, vector<int>& ans){ // O(n)
    visited[node] = 1;
    ans.push_back(node);
    
    for(auto & neighour : adj_List_1[node]){
        if(visited[neighour] == 0){ // Not Visited
            DFS(neighour, adj_List_1, visited, ans);
        }
    }
    // TC = O(n)
    // SC = O(n)
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}