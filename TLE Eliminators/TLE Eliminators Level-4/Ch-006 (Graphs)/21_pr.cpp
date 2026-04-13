// Correct. 

// ADACYCLE - Ada and Cycle
// https://www.spoj.com/problems/ADACYCLE/




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int Ans = -1;
void BFS(int node, vector<vector<int>>& adj_List_1){ // O(n + m)
    vector<int> visited(adj_List_1.size());
    queue<int> q;
    q.push(node); visited[node] = 1;
    
    int length = 0;
    queue<int> temp_q;
    while(!q.empty()){
        int u = q.front();
        q.pop();
        
        bool Break = false;
        for(auto &v : adj_List_1[u]){
            if(visited[v] == 0){
                visited[v] = 1;
                temp_q.push(v);
            }
            if(v == node){
                Ans = (length + 1); 
                Break = true; break;
            }
        }
        if(Break == true){ break;}
        
        if(q.empty() == true){
            length++;
            while(temp_q.empty() != true){
                q.push(temp_q.front());
                temp_q.pop();
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n; 
    vector<vector<int>> adj_List_1(n+1);
    vector<vector<int>> grid;
    for(int i=0; i < n; i++){
        vector<int> temp_Vec;
        for(int j=0; j < n; j++){
            int temp; cin >> temp;
            temp_Vec.push_back(temp);
        }
        grid.push_back(temp_Vec);
    }

    // Solution
    for(int i=0; i < n; i++){
        for(int j=0; j < n; j++){
            if(grid[i][j] == 1){
                adj_List_1[i+1].push_back(j+1);
            }
        }
    }

    vector<int> ans(n+1);
    for(int i=1; i <= n; i++){
        ans[i] = -1;
        BFS(i, adj_List_1);
        ans[i] = Ans;
        Ans = -1;
    }

    // O/P
    for(int i=1; i <= n; i++){
        if(ans[i] == -1){ cout << "NO WAY" << endl;}
        else{ cout << ans[i] << endl;}
    }
}