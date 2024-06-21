// This is Mentor's code.
// Wrong (Runtime error in line-45) 

// 150. Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/description/




















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
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0; i < tokens.size(); i++){
            s.push(to_string(tokens[i]));
            // Above line is giving me error.
            
            if((tokens[i] == "+") || (tokens[i] == "-") || (tokens[i] == "*") || (tokens[i] == "/")){
                int first_No, second_No;
                string operation = s.top();
                s.pop();
                second_No = stoi(s.top());
                s.pop();
                first_No = stoi(s.top());
                s.pop();

                int result;
                if(operation == "+"){
                    result = first_No + second_No;
                }
                else if(operation == "-"){
                    result = first_No - second_No;
                }
                else if(operation == "*"){
                    result = first_No * second_No;
                }
                else{
                    result = first_No / second_No;
                }

                s.push(to_string(result));
            }
        }

        return stoi(s.top());
    }
};