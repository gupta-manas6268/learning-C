// Wrong.

// 131. Palindrome Partitioning
// https://leetcode.com/problems/palindrome-partitioning/description/




































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
    bool palindrome(string s){
        bool ans = true;
        int n = s.length();
        for(int i=0; i < (n / 2); i++){
            if(s[i] != s[n-i-1]){
                ans = false;
            }
        }

        return ans;
    }

    vector<vector<string>> partition(string s) {
        int n = s.length();
        
    }
};