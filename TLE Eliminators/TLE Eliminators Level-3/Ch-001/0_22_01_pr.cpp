// Wrong.

// 878. Nth Magical Number
// https://leetcode.com/problems/nth-magical-number/description/




































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
    long long power(long long base, long long exp){
        long long result = 1;

        while(exp > 0){
            if((exp % 2) == 1){
                result *= base;

                base *= base;
                exp /= 2;
            }
            else{
                base *= base;
                exp /= 2;
            }
        }

        return result;
    }

    int nthMagicalNumber(int n, int a, int b) {
        set<long long> s;
        for(int i=1; i<=n; i++){
            long long mod = (power(10,9)+7);
            s.insert(((a%mod)*(i%mod)) % mod);
            s.insert(((b%mod)*(i%mod)) % mod);
        }

        auto it = (s.begin());
        advance(it, n-1);
        long long ans = *it;

        return ans;
    }
};