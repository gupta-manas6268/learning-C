// Correct.
// Concept is from Mentor's, Slide-1, Page-38 to 40
// This is My code. So, write Concept but don't Write Code
//  in Register notes.

// 62. Unique Paths
// https://leetcode.com/problems/unique-paths/description/


































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
    int power(long long base, long long exp){
        long long MOD = 2e9+11;
        long long result = 1;

        while(exp > 0){
            if((exp % 2) == 1){
                (result *= base) %= MOD;

                (base *= base) %= MOD;
                exp /= 2;
            }
            else{
                (base *= base) %= MOD;
                exp /= 2;
            }
        }
        result = (int)(result);

        return result;
    }

    int uniquePaths(int m, int n) {
        long long MOD = 2e9+11;

        vector<long long> fact((n+m-2) + 1);
        for(int i=0; i <= n+m-2; i++){
            if(i == 0){
                fact[i] = 1;
            }
            else{
                fact[i] = (fact[i-1] * i) % MOD; 
            }
        }

        long long inv_fact_1 = power(fact[n-1], MOD-2) % MOD;
        long long inv_fact_2 = power(fact[m-1], MOD-2) % MOD;

        long long ans = (fact[n+m-2] * ((inv_fact_1 * inv_fact_2)%MOD)) % MOD;
        ans = (int)(ans);
        return ans;
    }
};