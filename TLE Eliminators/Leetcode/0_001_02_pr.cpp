// Correct.

// 739. Daily Temperatures
// https://leetcode.com/problems/daily-temperatures/description/




































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
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<pair<int,int>> st;
        vector<int> ans(n, 0);

        for(int i = n-1; i >= 0; i--){
            if(i == (n-1)){ 
                st.push(make_pair(temperatures[i], i));
                ans[i] = 0;
            }
            else{
                while((st.size() != 0) && (temperatures[i] >= st.top().first)){
                    st.pop();
                }
                if(st.size() == 0){ 
                    ans[i] = 0;
                }
                else{
                    int wait = (st.top().second - i);
                    ans[i] = wait;
                }
                st.push(make_pair(temperatures[i], i));
            }
        }

        return ans;
    }
};