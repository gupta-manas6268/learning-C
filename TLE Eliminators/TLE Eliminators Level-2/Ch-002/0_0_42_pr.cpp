// This is Mentor's code.
// Correct.

// 93. Restore IP Addresses
// https://leetcode.com/problems/restore-ip-addresses/description/



































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
    vector<string> ipAddresses;

    bool isOkay(string s){
        int number = stoi(s); // stoi => string to int
        string actual_String = to_string(number);
        return (s == actual_String && number <= 255);
        // (s == actual_String) => Checks whether string has
        //                          leading zeroes or not.
    }

    void backtrack(int index, int sections, string &s, string current){
        if((index == s.size()) || (sections == 4)){
            current.pop_back();
            if((sections == 4) && (index == s.size())){
                ipAddresses.push_back(current);
            }

            return;
        }

        for(int len = 1; len <= 3; len++){
            if(((index + len) <= s.size()) && (isOkay(s.substr(index, len)))){
                // substr => substring.
                backtrack(index + len, sections + 1, s, current + s.substr(index, len) + ".");
            }
        }
    }

    vector<string> restoreIpAddresses(string s) {
        backtrack(0, 0, s, "");
        return ipAddresses;
    }
};