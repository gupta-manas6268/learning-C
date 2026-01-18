// Correct.
// This is Mentor's code.

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
    int orangesRotting(vector<vector<int>>& grid) {
        // Uses Multi-Source BFS.
        int minutes = 0, number_Of_Oranges_Left = 0;

        int dx[] = {1, -1, 0, 0};
        int dy[] = {0, 0, -1, 1};

        int n = grid.size(), m = grid[0].size();
        queue<pair<int,int>> q;
        for(int i=0; i < n; i++){
            for(int j=0; j < m; j++){
                if(grid[i][j] == 2){ q.push({i, j});}
                if(grid[i][j] == 1){ number_Of_Oranges_Left++;}
            }
        }

        while(!q.empty()){
            if(number_Of_Oranges_Left == 0){ break;}
            minutes++;

            int Queue_Size = q.size();
            for(int i=0; i < Queue_Size; i++){
                pair<int,int> coordinates = q.front();
                q.pop();

                for(int k=0; k < 4; k++){
                    int X = coordinates.first + dx[k];
                    int Y = coordinates.second + dy[k];

                    if((X >= 0) && (Y >= 0) && (X < n) && (Y < m) && (grid[X][Y] == 1)){
                        number_Of_Oranges_Left--;
                        q.push({X, Y});
                        grid[X][Y] = 2;
                    }
                }
            }
        }

        int ans = -1;
        if(number_Of_Oranges_Left == 0){ ans = minutes;}

        return ans;
        // TC = O(n * m)
    }
};