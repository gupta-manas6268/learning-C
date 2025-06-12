// This is Mentor's code.
// Correct.

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
        int j = 0;
        stack<int> s;
        int i = 0;

        while(i < n){
            if(pushed[i] == popped[j]){
                i++;  j++;
            }
            else if(!s.empty() && s.top() == popped[j]){
                s.pop();
                j++;
            }
            else{
                s.push(pushed[i++]);
            }
        }

        while(j < n){
            if(s.top() != popped[j]){
                return false;
            }
            s.pop();
            j++;
        }

        return true;
    }
};