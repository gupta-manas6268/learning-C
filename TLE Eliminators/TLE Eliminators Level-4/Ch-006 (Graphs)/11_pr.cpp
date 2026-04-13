// Correct.

// B. Fox And Two Dots
// https://codeforces.com/problemset/problem/510/B




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool ans = false;
void DFS(pair<int,int> node, vector<string>& grid, int Parent, vector<vector<int>>& visited){ 
    visited[node.first][node.second] = 1;
    
    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, -1, 1};

    int n = grid.size(), m = grid[0].size();
    for(int k=0; k < 4; k++){
        if((Parent == 0) && (k == 1)){ continue;}
        if((Parent == 1) && (k == 0)){ continue;}
        if((Parent == 2) && (k == 3)){ continue;}
        if((Parent == 3) && (k == 2)){ continue;}

        int X = node.first + dx[k];
        int Y = node.second + dy[k];

        if((X >= 0) && (Y >= 0) && (X < n) && (Y < m) && (grid[X][Y] == grid[node.first][node.second])){
            if(visited[X][Y] == 0){
                pair<int,int> New_node = {X, Y};
                DFS(New_node, grid, k, visited);
            }
            else if(visited[X][Y] == 1){ ans = true; break;}
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
    int n, m; cin >> n >> m;
    vector<string> grid(n);
    for(int i=0; i < n; i++){ cin >> grid[i];}

    // Solution
    vector<vector<int>> Visited;
    for(int i=0; i < n; i++){
        vector<int> temp;
        for(int j=0; j < m; j++){
            temp.push_back(0);
        }
        Visited.push_back(temp);
    }

    for(int i=0; i < n; i++){
        bool Break = false;
        for(int j=0; j < m; j++){
            if(Visited[i][j] == 0){
                DFS({i, j}, grid, -1, Visited);
            }
            if(ans == true){ Break = true; break;}
        }
        if(Break == true){ break;}
    }

    // O/P
    if(ans == true){ cout << "Yes" << endl;}
    else{ cout << "No" << endl;}

    // TC = O(n * m)
}