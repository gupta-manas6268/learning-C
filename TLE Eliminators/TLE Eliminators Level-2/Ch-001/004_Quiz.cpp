// 

// 70. Climbing Stairs
// https://leetcode.com/problems/climbing-stairs/description/



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
    int ans = 0;
    void func(int n){
        if(n == 0){ ans++;}
        else if(n == 1){ func(n-1);}
        else{
            func(n-1);
            func(n-2);
        }
    }
    int climbStairs(int n) {
        func(n);
        return ans;
    }
};


class Solution {
public:
    long long int fact(long long int n){
        // return n * fact(n-1);
        int ans = 1;
        for(int i=1; i<=n; i++){
            ans *= i;
        }
        return ans;
    }
    long long int nCr(long long int n, long long int r){
        long long int Ans = (fact(n)/ (fact(n-r) * fact(r)));
        return Ans;
    }
    long long int climbStairs(long long int n) {
        long long int ans = 0;
        for(int i=n; i>0; i++){
            if(i < (n-i)){ break;}
            if(i == n){ ans++;}
            else{
                ans += nCr(i, (n-i));
            }
        }
        return ans;
    }
};