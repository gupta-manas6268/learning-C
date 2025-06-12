// Correct.

// 496. Next Greater Element I
// https://leetcode.com/problems/next-greater-element-i/description/



#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}


vector<int> NGR(vector<int> v, int n){
    vector<int> ans(n);
    stack<int> st;

    for(int i = n-1; i >= 0; i--){
        while((st.empty() == false) && (st.top() <= v[i])){
            st.pop();
        }

        if(st.empty() == true){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(v[i]);
    }

    return ans;
}

class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ngr = NGR(nums2, nums2.size());

        vector<int> ans;
        for(int i=0; i<nums1.size(); i++){
            int search = nums1[i];
            vector<int> :: iterator it;
            it = find(nums2.begin(), nums2.end(), search);

            int value = ngr[it-nums2.begin()];
            ans.push_back(value);
        }

        return ans;
    }
};