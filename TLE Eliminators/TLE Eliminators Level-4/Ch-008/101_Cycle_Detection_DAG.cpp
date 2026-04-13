// DAG => Directed Acyclic Graph

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool check_Cycle(int node, vector<vector<int>>& adj, vector<bool>& visited, vector<bool>& in_Stack){
    visited[node] = in_Stack[node] = true;
    for(int child : adj[node]){
        if(in_Stack[child]){ return true;}
        if((!visited[child]) && (check_Cycle(child, adj, visited, in_Stack))){ 
            return true;
        }
    }
    in_Stack[node] = false; 
    // (↑) 'false' because now, we are outside of that node children.

    return false;
    // TC = O(V + E) = O(n + m)
    // SC = O(V) = O(n)
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    
}