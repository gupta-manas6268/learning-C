// Take Screenshots by fastly seeing the Lecture.







// Q.: Rearrange Array elements by sign?

#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange_Array(vector<int> &nums){
    int n = nums.size();
    vector<int> ans(n, 0);
    int positive_Index = 0, negative_Index = 1;
    
    for(int i=0; i<n; i++){
        if(nums[i] < 0){
            ans[negative_Index] = nums[i];
            negative_Index += 2;
        }
        else{
            ans[positive_Index] = nums[i];
            positive_Index += 2;
        }
    }

    return ans;

    // TC = O(n + (n/2))
    // TC = O(3*n / 2).

    // SC = O(n).
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}