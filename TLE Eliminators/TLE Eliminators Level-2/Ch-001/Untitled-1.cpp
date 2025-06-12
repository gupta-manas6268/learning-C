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
    void solve(int i, int n){
        if(i > n){ return;}
        else if(i == n){ ans++; return;}
        else{
            solve(i+1, n);
            solve(i+2, n);
        }
    }
    int climbStairs(int n) {
        solve(0, n);
        return ans;
    }
};