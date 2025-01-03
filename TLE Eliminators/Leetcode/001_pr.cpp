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
        vector<int> ans(n,0);
        map<int,int> mp;
        for(int i = n-1; i>=0; i--){
            if(i == (n-1)){ 
                ans[i] = 0;
                mp[temperatures[i]] = i;
            }
            else{
                int j = 100;
                int min_idx = 100001;
                while(j > temperatures[i]){
                    if(mp.find(j) != mp.end()){
                        if(mp[j] < min_idx){
                            min_idx = mp[j];
                        }
                    }
                    j--;
                }
                mp[temperatures[i]] = i;
                
                if(min_idx == 100001){
                    ans[i] = 0;
                }
                else{
                    ans[i] = (min_idx - i);
                }
            }
        }

        return ans;
    }
};