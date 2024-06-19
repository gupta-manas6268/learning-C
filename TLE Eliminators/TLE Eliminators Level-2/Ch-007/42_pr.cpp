// Correct.

// 1541. Minimum Insertions to Balance a Parentheses String
// https://leetcode.com/problems/minimum-insertions-to-balance-a-parentheses-string/description/




















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
    int minInsertions(string s) {
        stack<char> st;
        int ans = 0;
        for(int i=0; s[i] != '\0'; i++){
            if(s[i] == '('){
                st.push(s[i]);
            }
            else{
                if(s[i+1] == ')'){
                    if(st.empty() == false){
                        st.pop();
                    }
                    else{
                        ans++;
                    }
                    i++;
                }
                else{
                    if(st.empty() == false){
                        st.pop();
                        ans++;
                    }
                    else{
                        ans += 2;
                    }
                }
            }
        }

        if(st.empty() == false){
            int a = st.size();
            ans += (2 * a);
        }

        return ans;
    }
};