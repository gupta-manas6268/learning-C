// Correct.
// (Here, by the help of Hint we solve this Problem by using 'Map'.)

// 567. Permutation in String
// https://leetcode.com/problems/permutation-in-string/description/



































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
    bool checkInclusion(string s1, string s2) {
        int n = s2.length(), k = s1.length();
        bool ans = false;
        
        if(n >= k){
            map<char,int> mp_1, mp_2;
            for(int i=0; i < k; i++){
                mp_1[s1[i]]++;
            }

            for(int i=0; i < k; i++){
                mp_2[s2[i]]++;
            }

            for(int i=k; i <= n; i++){
                if(mp_1 == mp_2){
                    ans = true; break;
                }
                if(i < n){
                    mp_2[s2[i]]++; mp_2[s2[i-k]]--;
                    if(mp_2[s2[i-k]] == 0){
                        mp_2.erase(s2[i-k]);
                    }
                }
            }

        }
        
        return ans;
    }
};