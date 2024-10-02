// Correct.

// 22. Generate Parentheses
// https://leetcode.com/problems/generate-parentheses/description/


































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
    vector<string> ans;

    void solve(string s, int a, int b, int n){
        if(s.size() == (2 * n)){
            ans.push_back(s);
            return;
        }

        if((a < n) && (b < a)){
            solve(s + "(", a+1, b, n);
            solve(s + ")", a, b+1, n);
        }
        else if((a < n) && (b == a)){
            solve(s + "(", a+1, b, n);
        }
        else if((a == n) && (b < a)){
            solve(s + ")", a, b+1, n);
        }
    }

    vector<string> generateParenthesis(int n) {
        solve({}, 0, 0, n);
        return ans;
    }
};