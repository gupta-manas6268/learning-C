// Correct.
// (I solved it with the help of Hint.)

// D. Solve The Maze
// https://codeforces.com/contest/1365/problem/D



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void BFS(vector<string>& grid, vector<vector<int>>& visited, int n, int m){ // O(n + m)
    visited[n-1][m-1] = 1;
    queue<pair<int,int>> q;
    if(grid[n-1][m-1] == '.'){
        q.push({n-1, m-1});
    }
    
    while(!q.empty()){
        pair<int,int> u = q.front();
        q.pop();
        
        int i = u.first, j = u.second;
        if(i+1 < n){
            if(((grid[i+1][j] == '.') || (grid[i+1][j] == 'G')) && (visited[i+1][j] == 0)){
                q.push({i+1, j}); visited[i+1][j] = 1;
            }
        }                    
        if(i-1 >= 0){
            if(((grid[i-1][j] == '.') || (grid[i-1][j] == 'G')) && (visited[i-1][j] == 0)){
                q.push({i-1, j}); visited[i-1][j] = 1;
            }
        } 
        if(j+1 < m){
            if(((grid[i][j+1] == '.') || (grid[i][j+1] == 'G')) && (visited[i][j+1] == 0)){
                q.push({i, j+1}); visited[i][j+1] = 1;
            }
        } 
        if(j-1 >= 0){
            if(((grid[i][j-1] == '.') || (grid[i][j-1] == 'G')) && (visited[i][j-1] == 0)){
                q.push({i, j-1}); visited[i][j-1] = 1;
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
    
    int tc; cin >> tc;
    
    while (tc--){
        // I/P
        int n, m; cin >> n >> m;
        vector<string> grid(n);
        for(int i=0; i < n; i++){ cin >> grid[i];}
        
        // Solution
        bool ans = true;
        for(int i=0; i < n; i++){
            if(ans == false){ break;}
            for(int j=0; j < m; j++){
                if(grid[i][j] == 'B'){
                    if(i+1 < n){
                        if(grid[i+1][j] == 'G'){
                            ans = false; break;
                        }
                        if(grid[i+1][j] != 'B'){ grid[i+1][j] = '#';}
                    }                    
                    if(i-1 >= 0){
                        if(grid[i-1][j] == 'G'){
                            ans = false; break;
                        }
                        if(grid[i-1][j] != 'B'){ grid[i-1][j] = '#';}
                    } 
                    if(j+1 < m){
                        if(grid[i][j+1] == 'G'){
                            ans = false; break;
                        }
                        if(grid[i][j+1] != 'B'){ grid[i][j+1] = '#';}
                    } 
                    if(j-1 >= 0){
                        if(grid[i][j-1] == 'G'){
                            ans = false; break;
                        }
                        if(grid[i][j-1] != 'B'){ grid[i][j-1] = '#';}
                    }
                }
            }
        }
        
        if(ans == true){
            vector<vector<int>> visited(n, (vector<int> (m, 0)));
            BFS(grid, visited, n, m);
            for(int i=0; i < n; i++){
                if(ans == false){ break;}
                for(int j=0; j < m; j++){
                    if((grid[i][j] == 'G') && (visited[i][j] == 0)){
                        ans = false; break;
                    }
                }
            }
        }

        // O/P
        if(ans == true){ cout << "Yes" << endl;}
        else{ cout << "No" << endl;}
    }
    // TC = O(tc * (n*m))
    // SC = O(n*m)
}