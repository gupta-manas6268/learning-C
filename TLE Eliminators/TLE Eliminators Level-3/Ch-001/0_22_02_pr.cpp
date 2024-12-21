// Correct.
// (I write this code with the help of Hint & ChatGPT.)
// (See line-84 to 88.)

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
    int gcd_(int a, int b){
        if(a == 0){ return b;}
        return gcd_(b%a, a);
    }

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
        long long left = min(a,b);
        long long right = max((long long)a*n, (long long)b*n);
        // long long right = max(a*n, b*n); 
        //      Above line gives me wrong O/P for large I/P values,
        //      but by doing typecasting before 'a*n' & 'b*n', we
        //      can avoid this error.
        
        long long mod = (power(10,9) + 7);
        long long ans;
        while(left <= right){
            long long mid = (left + right)/2;
            long long num = 0;

            num += (mid/a);
            num += (mid/b);
            long long lcm = (a*b)/gcd_(a,b);
            num -= (mid/ lcm);

            if(num >= n){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        ans %= mod;

        return ans;
    }
};