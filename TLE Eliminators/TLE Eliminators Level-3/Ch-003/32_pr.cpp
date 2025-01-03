// 

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
        multiset<char> m1;
        int n = s2.length(), k = s1.length();
        int i=0;
        while(s1[i] != '\0'){
            m1.insert(s1[i]);
            i++;
        }

        bool ans = false;
        bool Break = false;
        vector<bool> is_S1;
        if(n > k){
            multiset<char> m2 = m1;
            for(int i=0; i<k; i++){
                auto it = m1.find(s2[i]);

                if(it != m1.end()){
                    m1.erase(it);
                    is_S1.push_back(true);
                }
                else{
                    is_S1.push_back(false);
                }
            }
            if(m1.size() == 0){
                ans = true; Break = true;
            }

            for(int i=k; i<n; i++){
                if(Break == true){ break;}

                if(is_S1[i-k] == true){
                    m1.insert(s2[i-k]);
                }

                auto it = m1.find(s2[i]);
                if(it != m1.end()){
                    m1.erase(it);
                    is_S1.push_back(true);
                }
                else{
                    is_S1.push_back(false);
                }

                if(m1.size() == 0){
                    ans = true; break;
                }
            }
        }
        else if(n == k){
            for(int i=0; i<n; i++){
                auto it = m1.find(s2[i]);
                if(it != m1.end()){
                    m1.erase(it);
                }
                else{
                    ans = false; break;
                }
            }
        }

        return ans;
    }
};