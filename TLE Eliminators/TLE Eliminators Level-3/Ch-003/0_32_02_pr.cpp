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
        map<int,int> mp_1;
        int i=0;
        while(s1[i] != '\0'){
            mp_1[s1[i]]++;
            i++;
        }

        bool ans = false;
        bool Break = false;
        vector<bool> is_S1;
        if(n > k){
            map<int,int> mp_2 = mp_1;
            for(int i=0; i<k; i++){
                auto it_1 = mp_1.find(s2[i]);
                auto it_2 = mp_2.find(s2[i]);

                if((it_1 != mp_1.end()) && (it_2 != mp_2.end())){ // Both 1st & 2nd  maps in.
                    mp_1[s2[i]]--;
                    mp_2[s2[i]]--;

                    if(mp_1[s2[i]] == 0){
                        mp_1.erase(s2[i]);
                    }
                    is_S1.push_back(true);
                }
                else if((it_1 == mp_1.end()) && (it_2 != mp_2.end())){ // 1st map out but 2nd map in.
                    mp_2[s2[i]]--;
                    is_S1.push_back(true);
                }
                else{ // Both 1st & 2nd maps out.
                    is_S1.push_back(false);
                }
            }
            if(mp_1.size() == 0){
                ans = true; Break = true;
            }

            for(int i=k; i<n; i++){
                if(Break == true){ break;}

                if(is_S1[i-k] == true){
                    mp_2[s2[i-k]]++;
                    if(mp_2[s2[i-k]] > 0){
                        mp_1[s2[i-k]]++;
                    }
                }

                auto it_1 = mp_1.find(s2[i]);
                auto it_2 = mp_2.find(s2[i]);

                if((it_1 != mp_1.end()) && (it_2 != mp_2.end())){ // Both 1st & 2nd in.
                    mp_1[s2[i]]--;
                    mp_2[s2[i]]--;

                    if(mp_1[s2[i]] == 0){
                        mp_1.erase(s2[i]);
                    }
                    is_S1.push_back(true);
                }
                else if((it_1 == mp_1.end()) && (it_2 != mp_2.end())){ // 1st out but 2nd out.
                    mp_2[s2[i]]--;
                    is_S1.push_back(true);
                }
                else{
                    is_S1.push_back(false);
                }

                if(mp_1.size() == 0){
                    ans = true; break;
                }
            }
        }
        else if(n == k){
            for(int i=0; i<n; i++){
                auto it = mp_1.find(s2[i]);
                if(it != mp_1.end()){
                    mp_1[s2[i]]--;
                    if(mp_1[s2[i]] == 0){
                        mp_1.erase(s2[i]);
                    }
                }
                else{
                    ans = false; break;
                }

                if(i == (n-1)){
                    ans = true;
                }
            }
        }

        return ans;
    }
};