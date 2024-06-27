// Correct.

// 342. Power of Four
// https://leetcode.com/problems/power-of-four/description/
































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
    bool isPowerOfFour(int n) {
        if(n == 1){ return true;}
        if(n%4 != 0){ return false;}
        if(n == 0){ return false;}
        return isPowerOfFour(n/4);
    }
};