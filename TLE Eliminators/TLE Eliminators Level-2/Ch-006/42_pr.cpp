// Correct.

// 1922. Count Good Numbers
// https://leetcode.com/problems/count-good-numbers/description/






















#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}

const int MOD = 1e9 + 7;
long long power(long long a, long long b){
    long long result = 1;

    while(b > 0){
        if(b%2 == 1){
            (result *= a) %= MOD;

            (a *= a) %= MOD;
            b /= 2; 
        }
        else{
            (a *= a) %= MOD;
            b /= 2;
        }
    }

    return result;
}

class Solution {
public:
    int countGoodNumbers(long long n) {
        int ans = 1;
        if(n%2 == 0){
            ans = power(20, n/2);
        }
        else{
            ans *= (((5 % MOD) * (power(20, (n-1)/2))) % MOD);
        }

        return ans;
    }
};