// Correct. (Easy)
// This is My code.

// 1545. Find Kth Bit in Nth Binary String
// https://leetcode.com/problems/find-kth-bit-in-nth-binary-string/description/



































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
    char ans;
    void solve(int i, int n, int k, string current){
        if(i == 1){
            solve(i+1, n, k, current);
        }
        else if(i > n){
            ans = current[k-1];
            return;
        }
        else if(i <= n){
            string temp = current;
            temp += '1';
            for(int j = (current.length()-1); j >= 0; j--){
                if(current[j] == '0'){
                    temp += '1';
                }
                else{ temp += '0';}
            }

            solve(i+1, n, k, temp);
        }
    }
    char findKthBit(int n, int k) {
        solve(1, n, k, "0");
        return ans;
    }
};