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
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();

        int ans = 0;
        bool Ans = true;
        for(int i=0; i <= (n-k); i++){
            if(nums[i] == 0){
                for(int j = i; j <= (i+k-1); j++){
                    nums[j] = (nums[j] ^ 1); // Flip-bits.
                }
                ans++;
            }
        }
        for(int i = (n-k+1); i < n; i++){
            if(nums[i] == 0){ Ans = false; break;}
        }

        if(Ans == false){ ans = -1;}

        return ans;
        // TC = O(n * k).
    }
};