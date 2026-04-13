// Correct.
// (This is My code.)

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
    void solve(int n, int x, set<int>& y, vector<pair<int,int>>& X_Y){
        if(x == n){
            string Temporary = "";
            for(int j=0; j < n; j++){
                Temporary += '.';
            }

            vector<string> temp(n);
            for(int i=0; i < n; i++){
                temp[i] = Temporary;
            }
            for(int i=0; i < X_Y.size(); i++){
                int X = X_Y[i].first;
                int Y = X_Y[i].second;
                temp[X][Y] = 'Q';
            }

            ans.push_back(temp);
        }
        for(int i=0; i < n; i++){
            auto it = y.find(i);
            if(it == y.end()){ // Not found
                bool Condition = true;
                for(auto &Pair : X_Y){ // Diagonal condition
                    int dx = (x - Pair.first);
                    int dy = (i - Pair.second);
                    if(abs(dx) == abs(dy)){ Condition = false; break;}
                }
                if(Condition == true){
                    y.insert(i);
                    X_Y.push_back({x, i});
                    solve(n, x+1, y, X_Y);

                    // Pop those values.
                    auto it_1 = y.find(i);
                    y.erase(it_1);
                    X_Y.pop_back();
                }
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        set<int> y;
        vector<pair<int,int>> X_Y;
        solve(n, 0, y, X_Y);
        return ans;
    }
};