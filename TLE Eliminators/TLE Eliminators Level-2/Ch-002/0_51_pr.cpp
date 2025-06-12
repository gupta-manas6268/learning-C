// This is Mentor's code.
// Correct.

// 241. Different Ways to Add Parentheses
// https://leetcode.com/problems/different-ways-to-add-parentheses/description/



































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
    vector<int> possible_Answers;

    vector<int> backtrack(int start, int end, string &exp){
        int length = end - start + 1;
        if(length <= 2){
            return {stoi(exp.substr(start, length))};
        }

        vector<int> possible_Vals;

        for(int i = start; i <= end; i++){
            if((exp[i] == '-') || (exp[i] == '+') || (exp[i] == '*')){
                vector<int> left_Values = backtrack(start, i - 1, exp);
                vector<int> right_Values = backtrack(i + 1, end, exp);

                for(auto &x : left_Values){
                    for(auto &y : right_Values){
                        if(exp[i] == '-'){
                            possible_Vals.push_back(x - y);
                        }
                        if(exp[i] == '+'){
                            possible_Vals.push_back(x + y);
                        }
                        if(exp[i] == '*'){
                            possible_Vals.push_back(x * y);
                        }
                    }
                }
            }
        }

        return possible_Vals;
    }

    vector<int> diffWaysToCompute(string expression) {
        return backtrack(0, expression.size() - 1, expression);
    }
};