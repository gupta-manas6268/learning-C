// This is Mentor's code.
// Correct.

// 17. Letter Combinations of a Phone Number
// https://leetcode.com/problems/letter-combinations-of-a-phone-number/description/



































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
    vector<string> number_Pad{"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;

    void backtrack(int index, string &digits, string current){
        if(index == digits.size()){
            ans.push_back(current);
            return;
        }

        // '0', '1', '2', ... '9'
        // '9' - '0' = 9
        // '2' - '0' = 2

        for(auto &letter : number_Pad[digits[index] - '0']){
            backtrack(index + 1, digits, current + letter);
        }
    }

    vector<string> letterCombinations(string digits) {
        if(digits.empty()){ return {};}
        backtrack(0, digits, "");
        
        return ans;
    }
};