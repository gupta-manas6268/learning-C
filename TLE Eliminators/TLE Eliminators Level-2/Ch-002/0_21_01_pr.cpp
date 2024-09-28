// Wrong. (Runtime Error.)

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
    string current;

    void backtrack(int index, string digits){
        if(index == digits[digits.size() - 1]){
            ans.push_back(current);
        }

        int val = (int)(digits[index] - 48);
        char a = (digits[index] + 47 + (3 * (val - 2)));
        if(val == 8){ a += 1;}

        if((val <= 6) || (val == 8)){
            int n = current.length();

            current += a;
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);

            current += (a + 1);
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);

            current += (a + 2);
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);
        }
        else if((val == 7) || (val == 9)){
            int n = current.length();

            current += a;
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);

            current += (a + 1);
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);

            current += (a + 2);
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);

            current += (a + 3);
            backtrack(index + 1, digits);
            current.erase(current.begin() + n-1);
        }
    }

    vector<string> letterCombinations(string digits) {
        backtrack(0, digits);

        return ans;
    }
};