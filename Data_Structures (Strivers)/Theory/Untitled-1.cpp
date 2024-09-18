#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}


string read(int n, vector<int> book, int target)
{
    // Write your code here.
    sort(book.begin(), book.end());
    int upper = n;
    bool ans = false;
    for(int i=0; i<n; i++){
        int x = (target - book[i]);
        int index = lower_bound(book.begin(), book.begin() + upper, x) - book.begin();
        if(book[index] == x){
            ans = true; break;
        }
    }

    if(ans == true){ return "YES";}
    else{ return "NO";}
}


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> nums_1 = nums;
        sort(nums.begin(), nums.end());
        vector<int> nums_2 = nums;
        int upper = n;
        vector<int> ans;

        for(int i=0; i<n; i++){
            int x = (target - nums_2[i]);
            int index = lower_bound(nums_2.begin(), nums_2.begin() + upper, x) - nums_2.begin();
            if(nums_2[index] == x){
                for(int j=0; j<n; j++){
                    if(nums_2[i] == nums_1[j]){
                        ans.push_back(j); break;
                    }
                }
                for(int j=0; j<n; j++){
                    if(nums_2[index] == nums_1[j]){
                        if(j != ans[0]){
                            ans.push_back(j); break;
                        }
                    }
                }
                break;
            }
        }

        return ans;
    }
};