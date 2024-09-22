// Wrong.

// 509. Fibonacci Number
// https://leetcode.com/problems/fibonacci-number/description/



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
    int fib(int n) {
        int fib[n+1];
        fib[0] = 0, fib[1] = 1;
        for(int i=2; i<=n; i++){
            fib[i] = (fib[i-1] + fib[i-2]);
        }

        int ans = fib[n];
        return ans;
    }
};