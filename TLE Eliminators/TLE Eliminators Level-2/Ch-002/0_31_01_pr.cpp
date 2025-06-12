// Wrong.

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
    vector<vector<string>> ans;
    vector<int> Queens;
    vector<string> temp;

    bool isValid(int i, int j, vector<vector<string>> current, int n){
        
    }
    
    bool No_Position(int i, vector<int> Queens, int n){
        
    }

    void backtrack(int i, int queens, int n){

        for(int j=0; j<n; j++){
            int index = 0;

            for(int k=0; k<j; k++){
                temp.push_back(".");
                index++;
            }
            temp.push_back("Q");
            Queens.push_back(index);

            for(int k = (j+1); k<n; k++){
                temp.push_back(".");
                index++;
            }

            isValid(i, j, ans, n);
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        backtrack(0, 0, 0, n);
    }
};