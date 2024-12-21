// Correct.

// 1482. Minimum Number of Days to Make m Bouquets
// https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/description/






































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
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n = bloomDay.size();

        int ans = -1;
        int left = *min_element(bloomDay.begin(), bloomDay.end());
        int right = *max_element(bloomDay.begin(), bloomDay.end());
        // left => start_time, right => end_time

        while(left <= right){
            int mid = (left + right)/2;

            int total_Adjacent = 0;
            int bouquet = 0;
            for(int i=0; i<n; i++){
                if((mid >= bloomDay[i]) && (total_Adjacent == 0)){
                    total_Adjacent++;
                }
                else if((mid >= bloomDay[i]) && (mid >= bloomDay[i-1]) && (total_Adjacent != 0)){
                    total_Adjacent++;
                }
                else if((mid >= bloomDay[i]) && (mid < bloomDay[i-1]) && (total_Adjacent != 0)){
                    total_Adjacent = 0;
                    total_Adjacent++;
                }

                if(total_Adjacent == k){
                    bouquet++;
                    total_Adjacent = 0;
                }
            }

            if(bouquet >= m){
                ans = mid;
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }

        return ans;
    }
};