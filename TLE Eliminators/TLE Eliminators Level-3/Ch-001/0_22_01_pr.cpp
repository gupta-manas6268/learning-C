// Correct.
// (This is My code in 2nd Revision time.)

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
    int nthMagicalNumber(int n, int a, int b) {
        long long  mini = min(a, b), maxi = max(a, b);
        long long A = (long long)(mini), B = (long long)(maxi);
        long long  LCM = (A * B) / (__gcd(A, B));

        long long  left = 1, right = (B * n);
        long long ans;
        while(left <= right){
            long long mid = (left + right) / 2;

            long long temp = 0;
            temp += (mid / A);
            temp += (mid / B);
            temp -= (mid / LCM);

            if(temp >= n){
                ans = mid;
                right = mid - 1;
            }
            else{
                left = mid + 1;
            }
        }

        int Final_Ans = (int)(ans % (long long)(1e9+7));

        return Final_Ans;
    }
};