// 

// 37. Sudoku Solver
// https://leetcode.com/problems/sudoku-solver/description/


#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}



class Solution {
public:
    bool isValid(int i, int j, vector<vector<char>> &board, char c){
        // 1: row condition.
        for(int k=0; k<9; k++){
            if(board[i][k] == c){
                return false;
            }
        }

        // 2: column condition.
        for(int k=0; k<9; k++){
            if(board[k][j] == c){
                return false;
            }
        }

        // 3:  3*3 grid
        for(int ki = i-(i%3); ki < (i-(i%3) + 3); ki++){
            for(int kj = j-j%3; kj < (j-j%3 +3); kj++){
                if(board[ki][kj] == c){
                    return false;
                }
            }
        }
        return true;
    }

    bool solve(int i, int j, vector<vector<char>> &board){
        if(i == 9){
            return true;
        }
        if(j == 9){
            return solve(i+1, 0, board);
        }
        if(board[i][j] != '.'){
            return solve(i, j+1, board);
        }

        for(char c='1'; c <= '9'; c++){
            // 'isValid' function which told me that current c was good to go
            if(isValid(i, j, board, c) == false){
                continue;
            }

            board[i][j] = c;
            bool result = solve(i, j+1, board);
            if(result == true){
                return true;
            }
            board[i][j] = '.';
        }
        return false;
    }
    
    void solveSudoku(vector<vector<char>>& board) {
        solve(0, 0, board);  // here, '0','0' because we start from top left corner.
        return;
    }
};