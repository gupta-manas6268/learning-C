// Correct.
// (This is My code in 2nd Revision time.)

// 946. Validate Stack Sequences
// https://leetcode.com/problems/validate-stack-sequences/description/



































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
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int n = pushed.size();

        stack<int> st;
        bool ans = true;
        int i = 0, j = 0;
        while((i < n) || (j < n)){
            while(st.empty() != true){
                if((st.top() == popped[j])){
                    st.pop();
                    j++;
                }
                else{ break;}
            }

            if((i == n) && (st.empty() != true)){
                if(st.top() != popped[j]){
                    ans = false; break;
                }
            }
            else if(i < n){
                st.push(pushed[i]);
                i++;
            }
        }

        return ans;
    }
};