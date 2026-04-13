// Correct.
// (This is My code in 2nd-time.)

// (No need to write code & logic.)

// 994. Rotting Oranges
// https://leetcode.com/problems/rotting-oranges/description/


































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class Solution {
public:
    int BFS(vector<pair<int,int>>& node, vector<vector<int>>& grid, int n, int m){ // O(n + m)
        vector<vector<int>> visited(n, (vector<int> (m, 0)));
        queue<pair<int,int>> q;
        for(int i=0; i < node.size(); i++){
            q.push({node[i].first, node[i].second}); visited[node[i].first][node[i].second] = 1;
        }
        
        int ans = 0;
        while(!q.empty()){
            queue<pair<int,int>> temp;
            ans++;
            while(!q.empty()){
                pair<int,int> u = q.front();
                q.pop();

                int i = u.first, j = u.second;
                if(i+1 < n){
                    if(grid[i+1][j] == 1){
                        grid[i+1][j] = 2;
                        temp.push({i+1, j});
                    }
                }                    
                if(i-1 >= 0){
                    if(grid[i-1][j] == 1){
                        grid[i-1][j] = 2;
                        temp.push({i-1, j});
                    }
                } 
                if(j+1 < m){
                    if(grid[i][j+1] == 1){
                        grid[i][j+1] = 2;
                        temp.push({i, j+1});
                    }
                } 
                if(j-1 >= 0){
                    if(grid[i][j-1] == 1){
                        grid[i][j-1] = 2;
                        temp.push({i, j-1});
                    }
                } 
            }
            swap(q, temp);
        }
        if(ans >= 1){ ans--;}

        return ans;
        // TC = O(n + m)
        // SC = O(n)
        //      (n => no. of nodes, m => no. of edges (max.(m) = n*(n-1) ))
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size(), m = grid[0].size();
        vector<pair<int,int>> node;
        for(int i=0; i < n; i++){
            for(int j=0; j < m; j++){
                if(grid[i][j] == 2){ node.push_back({i, j});}
            }
        }

        int ans = BFS(node, grid, n, m);
        for(int i=0; i < n; i++){
            bool Break = false;
            for(int j=0; j < m; j++){
                if(grid[i][j] == 1){ ans = -1; Break = true; break;}
            }
            if(Break == true){ break;}
        }

        return ans;
    }
};