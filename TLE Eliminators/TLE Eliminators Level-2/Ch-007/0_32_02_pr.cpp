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
        int arr[26] = {0};
        for(int i=0; i<s.size(); i++){
            int index = (s[i] - 97);
            arr[index] = 1;
        }

        vector<char> ans;
        // int j = 0;
        for(int i=0; i<26; i++){
            if(arr[i] = 1){
                char temp = (char)(i + 97);
                ans.push_back(temp);
                // j++;
            }
        }
        // ans[j] = '\0';
        string Final_Ans = ans;

        return ans;
    }
};