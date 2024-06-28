// Correct.

// 79. Word Search
// https://leetcode.com/problems/word-search/description/


































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
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    bool helper(vector<vector<char>>& board, string word, int i, int j, int index){
        if(index >= word.size()){ return true;}
        // (i,j)
        
        // 1. It is not inside the grid anymore.
        // 2. If ( word[index] != board[i][j] ).
        // 3. If I, am at a cell which has already been explored then
        //     also backtrack.

        int n = board.size();
        int m = board[0].size();
        if((i<0) || (i >= n) || (j<0) || (j >= m) || (word[index] != board[i][j]) || (board[i][j] == '#')){
            return false;
        }

        char temp = board[i][j];
        board[i][j] = '#';
        for(int k=0; k<4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(helper(board, word, ni, nj, index+1) == true){
                return true;
            }
        }
        board[i][j] = temp;

        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(helper(board, word, i, j, 0) == true)
                return true;
            }
        }
        return false;
    }
};