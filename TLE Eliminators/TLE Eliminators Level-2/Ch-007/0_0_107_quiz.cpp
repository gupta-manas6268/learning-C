// Correct.
// (This is Mentor's code.)

// 85. Maximal Rectangle
// https://leetcode.com/problems/maximal-rectangle/description/





















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
    int helper(vector<int> &v){
        int n = v.size();
        vector<int> NSL(n,0), NSR(n,0);
        stack<int> st1, st2;

        for(int i=0; i<n; i++){
            while(!st1.empty() && v[st1.top()] >= v[i]){
                st1.pop();
            }

            if(st1.empty()){
                NSL[i] = -1;
            }
            else{
                NSL[i] = st1.top();
            }
            st1.push(i);
        }

        for(int i = n-1; i>=0; i--){
            while(!st2.empty() && v[st2.top()] >= v[i]){
                st2.pop();
            }

            if(st2.empty()){
                NSR[i] = n;
            }
            else{
                NSR[i] = st2.top();
            }
            st2.push(i);
        }

        int ans = 0;
        for(int i=0; i<n; i++){
            ans = max(ans, v[i] * (i - NSL[i] + NSR[i] - i - 1));
        }

        return ans;
    }
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        vector<vector<int>> v(m, vector<int> (n, 0));
        for(int i=0; i<n; i++){
            if(matrix[0][i] == '1'){
                v[0][i] = 1;
            }
        }

        for(int i=1; i<m; i++){
            for(int j=0; j<n; j++){
                if(matrix[i][j] == '1'){
                    v[i][j] = 1 + v[i-1][j];
                }
            }
        }

        int ans = 0;
        for(int i=0; i<m; i++){
            ans = max(ans, helper(v[i]));
        }

        return ans;
    }
};