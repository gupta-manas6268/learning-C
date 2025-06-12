// Wrong.

// 316. Remove Duplicate Letters
// https://leetcode.com/problems/remove-duplicate-letters/description/




















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
    string removeDuplicateLetters(string s) {
        set<char> ans;
        for(int i=0; i < s.size(); i++){
            ans.insert(s[i]);
        }

        string Final_Answer;
        int i=0;
        for(char it:ans){
            Final_Answer[i] = it;
            i++;
        }
        
        return Final_Answer;
    }
};