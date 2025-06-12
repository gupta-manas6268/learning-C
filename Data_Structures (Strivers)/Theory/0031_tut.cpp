// Take Screenshots by fastly seeing the Lecture.






// Rotate The Matrix 
// https://www.naukri.com/code360/problems/rotate-the-matrix_6825090



#include<bits/stdc++.h>
using namespace std;

void rotate_Matrix(vector<vector<int>> &mat){
    int n = mat.size();
    // Transpose  = O(n/2 * n/2)
    for(int i=0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            swap(mat[i][j], mat[j][i]);
        }
    }
    // Reverse  = O(n * n/2)
    for(int i=0; i<n; i++){
        // row is 'mat[i]'
        reverse(mat[i].begin(), mat[i].end());
    }
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}