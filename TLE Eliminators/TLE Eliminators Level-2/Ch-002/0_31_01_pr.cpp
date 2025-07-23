// Correct.
// This is Mentor's code.

// 51. N-Queens
// https://leetcode.com/problems/n-queens/description/



































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
    vector<vector<string>> combinations;
    vector<string> current;

    bool freeColumn(int col, int n){
        for(int i=0; i<n; i++){
            if(current[i][col] == 'Q'){
                return false;
            }
        }

        return true;
    }

    bool freeDiag(int row, int col, int n){
        for(int i = row, j = col; i >= 0 && j >= 0; i--, j--){
            if(current[i][j] == 'Q'){
                return false;
            }
        }

        for(int i = row, j = col; i >= 0 && j < n; i--, j++){
            if(current[i][j] == 'Q'){
                return false;
            }
        }

        return true;
    }

    void backtrack(int index, int n){
        if(index == n){
            combinations.push_back(current);
            return;
        }

        for(int i=0; i<n; i++){
            if((freeColumn(i, n) == true) && (freeDiag(index, i, n) == true)){
                current[index][i] = 'Q';
                backtrack(index + 1, n);
                current[index][i] = '.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        current.assign(n, string(n, '.'));
        backtrack(0, n);
        return combinations;
    }
};