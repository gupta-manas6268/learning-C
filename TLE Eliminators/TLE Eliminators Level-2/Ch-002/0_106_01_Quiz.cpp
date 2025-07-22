// Wrong 
//  (TLE, TC = O(n * m * power(4, length of word)).)

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
    bool ans = false;
    void solve(int i, int j, int index, vector<vector<int>>& visited, vector<vector<char>>& board, string word){
        int n = board.size(), m = board[0].size();
        if((i >= 0) && (i < n) && (j >= 0) && (j < m)){
            if(visited[i][j] == 1){ return;}
            if(board[i][j] == word[index]){
                if(index == (word.length()-1)){ ans = true; return;}
                visited[i][j] = 1;
                solve(i+1, j, index+1, visited, board, word);
                solve(i, j+1, index+1, visited, board, word);         
                solve(i-1, j, index+1, visited, board, word);         
                solve(i, j-1, index+1, visited, board, word);         
            }
        }
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        vector<vector<int>> visited(n);
        for(int i=0; i < n; i++){
            vector<int> temp(m, 0);
            visited[i] = temp;
        }
        bool Break = false;
        for(int i=0; i < n; i++){
            for(int j=0; j < m; j++){
                solve(i, j, 0, visited, board, word);
                if(ans == true){ Break = true; break;}
            }
            if(Break == true){ break;}
        }
        return ans;
    }
};