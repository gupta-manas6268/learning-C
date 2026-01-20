// Correct.
// (This is My code in 2nd-time.)

// (No need to write code & logic.)

// D. Valid BFS?
// https://codeforces.com/contest/1037/problem/D

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
bool BFS(int node, vector<vector<int>>& adj_List_1, queue<int>& check){ // O(n + m)
    vector<int> visited(adj_List_1.size(), 0);
    queue<int> q;
    q.push(node); 
    visited[node] = 1;
    
    check.pop();
    bool Ans = true;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        vector<int> temp = adj_List_1[u];
        while(check.empty() != true){
            int node = check.front();
            if(visited[node] == 1){ Ans = false; break;}
            else{
                int upper = (upper_bound(temp.begin(), temp.end(), node) - temp.begin());
                int lower = (lower_bound(temp.begin(), temp.end(), node) - temp.begin());
                int is_Node = (upper - lower);
                
                // cout << u << " " << node << " " << is_Node << endl;
                if(is_Node == 1){ 
                    q.push(node); check.pop();
                    visited[node] = 1;
                }
                else{ break;}
            }
        }
    }
    if(check.empty() != true){ Ans = false;}

    return Ans;
    // TC = O(n)
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
    vector<vector<int>> adj(n+1);
    for(int i=0; i < n-1; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for(int i=1; i <= n; i++){ sort(adj[i].begin(), adj[i].end());}
    queue<int> a;
    for(int i=0; i < n; i++){
        int temp; cin >> temp;
        a.push(temp);
    }

    // O/P
    bool Ans = BFS(1, adj, a); 
    // cout << endl;
    if(Ans == true){ cout << "Yes" << endl;}
    else{ cout << "No" << endl;}
}