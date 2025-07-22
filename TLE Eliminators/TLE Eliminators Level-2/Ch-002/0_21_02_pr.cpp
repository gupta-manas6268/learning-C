// Correct.
// (This is My code.)

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
    vector<string> ans;
    void solve(map<char,string>& mp, string digits, string current){
        if(current.length() == digits.length()){
            ans.push_back(current);
            return;
        }
        int index = current.length();
        string temp = mp[digits[index]];
        for(int i=0; i < temp.length(); i++){
            solve(mp, digits, current + temp[i]);
        }
    }
    vector<string> letterCombinations(string digits) {
        map<char, string> mp;
        mp['2'] = "abc";
        mp['3'] = "def";
        mp['4'] = "ghi";
        mp['5'] = "jkl";
        mp['6'] = "mno";
        mp['7'] = "pqrs";
        mp['8'] = "tuv";
        mp['9'] = "wxyz";

        if(digits.length() > 0){
            solve(mp, digits, "");
        }
        return ans;
    }
};