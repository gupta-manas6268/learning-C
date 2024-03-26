// Maximum Odd Binary Number
// https://leetcode.com/problems/maximum-odd-binary-number/?envType=daily-question&envId=2024-03-01

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    string s;
    cin >> s;

    string maximumOddBinaryNumber(string s) {
        int a = 0, b = 0;
        int i = 0;
        int len = 0;

        while(s[i] != '\0'){
            if(s[i] == '1'){
                a++;
            }
            else if(s[i] == '0'){
                b++;
            }
            i++;
            len++;
        }

        char ans[len+1];

        if(len == 0){}
        else if(a == 1){
            for(int i=0; i<len; i++){
                if(i == len-1){
                    ans[i] = '1';
                }
                else{
                    ans[i] = '0';
                }
            }
        }
        else if(a == 0){
            for(int i=0; i<len; i++){
                ans[i] = '0';
            }
        }
        else{
            int count = a-1;
            for(int i=0; i<count; i++){
                ans[i] = '1';
            }
            for(int i=count; i < len-1; i++){
                ans[i] = '0';
            }
            ans[len-1] = '1';
            ans[len] = '\0';
        }

            return ans;
        }
};

