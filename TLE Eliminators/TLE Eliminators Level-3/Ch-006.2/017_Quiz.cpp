// 

// 3128. Right Triangles
// https://leetcode.com/problems/right-triangles/description/



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
    long long numberOfRightTriangles(vector<vector<int>>& grid) {
        int m = grid.size(), n = grid[0].size();

        vector<int> Row, Col;
        for(int i=0; i<m; i++){
            int temp = 0;
            for(int j=0; j<n; j++){
                if(grid[i][j] == 1){ temp++;}
            }
            Row.push_back(temp); // m, i
        }
        for(int j=0; j<n; j++){
            int temp = 0;
            for(int i=0; i<m; i++){
                if(grid[i][j] == 1){ temp++;}
            }
            Col.push_back(temp); // n, j
        }

        long long ans = 0;    
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(grid[i][j] == 1){
                    int a = (Row[i]-1);
                    int b = (Col[j]-1);

                    ans += (long long)(a * b);
                }
            }
        }

        return ans;
    }
};