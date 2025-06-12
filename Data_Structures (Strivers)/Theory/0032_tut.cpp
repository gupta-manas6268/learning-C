// Take Screenshots by fastly seeing the Lecture.








// Spiral Matrix 
// https://www.naukri.com/code360/problems/spiral-matrix_6922069






#include<bits/stdc++.h>
using namespace std;

vector<int> spiral_Matrix(vector<vector<int>> &mat){
    int n = mat.size();
    int m = mat[0].size();
    int left = 0, right = m-1;
    int top = 0, bottom = n-1;
    vector<int> ans;

    while((top <= bottom) && (left <= right)){
        // Right
        for(int i = left; i <= right; i++){
            ans.push_back(mat[top][i]);
        }
        top++;

        for(int i = top; i <= bottom; i++){
            ans.push_back(mat[i][right]);
        }
        right--;

        if(top <= bottom){
            for(int i = right; i >= left; i--){
                ans.push_back(mat[bottom][i]);
            }
            bottom--;
        }

        if(left <= right){
            for(int i = bottom; i >= top; i--){
                ans.push_back(mat[i][left]);
            }
            left++;
        }
    }

    return ans;

    // TC = O(n * m).
    // SC = O(n * m).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}