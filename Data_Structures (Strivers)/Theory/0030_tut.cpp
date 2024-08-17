// Take Screenshots by fastly seeing the Lecture.







// Zero Matrix 
// https://www.naukri.com/code360/problems/zero-matrix_1171153






#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> zero_Matrix(vector<vector<int>> &matrix, int n, int m){
    // int col[m] = {0};  -> matrix[0][..]
    // int row[n] = {0};  -> matrix[..][0]

    int col_0 = 1;
    for(int i=0; i < n; i++){
        for(int j=0; j < m; j++){
            if(matrix[i][j] == 0){
                // mark the i-th row.
                matrix[i][0] = 0;
                // mark the j-th row.
                if(j != 0){
                    matrix[0][j] = 0;
                }
                else{
                    col_0 = 0;
                }
            }
        }
    }
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][j] != 0){
                // check for col & row.
                if((matrix[0][j] == 0) || (matrix[i][0] == 0)){
                    matrix[i][j] = 0;
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j=0; j < m; j++){
            matrix[0][j] = 0;
        }
    }
    if(col_0 == 0){
        for(int i=0; i < n; i++){
            matrix[i][0] = 0;
        }
    }

    return matrix;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}