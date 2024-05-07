// 

// 1137. N-th Tribonacci Number
// https://leetcode.com/problems/n-th-tribonacci-number/description/





#include<bits/stdc++.h>
using namespace std;

int main(){
    
    return 0;
}

class Solution {
public:
    int Our_Tribonacci(int i, int n){
        if(i == 0){
            return 0;
        }
        else if((i == 1) || (i == 2)){
            return 1;
        }
        else{
            int ans = Our_Tribonacci(i-1, n) + Our_Tribonacci(i-2, n) + Our_Tribonacci(i-3, n);
            return ans;
        }
    }

    int tribonacci(int n) {
        int ans = Our_Tribonacci(0, n);
        return ans;
    }
};