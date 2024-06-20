// This is Mentor's code.

// Correct.

// 372. Super Pow
// https://leetcode.com/problems/super-pow/description/

















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
    long long MOD = 1337;
    long long power(long long a, long long b){
        long long result = 1;

        while(b > 0){
            if(b%2 == 1){
                result = ((result % MOD) * (a % MOD) % MOD);
            }
            a = ((a % MOD) * (a % MOD) % MOD);
            b /= 2;
        }

        return result;
    }
    // TC = log(b).  (And, b <= 9, (as b[i] <= 9.) )

    int superPow(int a, vector<int>& b) {
        int result = 1;
        for(auto digit:b){
            result = ((power(result, 10) % MOD) * power(a, digit) % MOD)% MOD;
        }
        return result;
    }
    // Total TC = O(2000 * log(9)).
    // 2000 => size of array b.
    // b[i] <= 9.
};