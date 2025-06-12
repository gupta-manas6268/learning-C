// Correct.

// 74. Search a 2D Matrix
// https://leetcode.com/problems/search-a-2d-matrix/description/





























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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();

        bool ans = false;
        for(int i=0; i<n; i++){
            int index = lower_bound(matrix[i].begin(), matrix[i].end(), target) - matrix[i].begin();
            if(index == m){

            }
            else if(matrix[i][index] == target){
                ans = true; break;
            }
        }

        return ans;
    }
};