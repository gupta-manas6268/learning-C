// Wrong.

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
        stack<int> st;

        for(int i=0; i < tokens.size(); i++){
            if((tokens[i] != "+") || (tokens[i] != "-") || (tokens[i] != "*") || (tokens[i] != "/")){
                int a = 0;
                bool negative = false;
                for(int j=0; j < tokens[i].size(); j++){
                    if(tokens[i][j] == '-'){
                        negative = true;
                    }
                    else{
                        a = (10 * a) + (int)(tokens[i][j]);
                    }
                }
                if(negative == true){ a = -a;}
                st.push(a);
            }
            else{
                int a, b;
                st.top() = b;
                st.pop();
                st.top() = a;
                st.pop();

                if(tokens[i] == "+"){
                    int c = a + b;  st.push(c);
                }
                else if(tokens[i] == "-"){
                    int c = a - b;  st.push(c);
                }
                else if(tokens[i] == "*"){
                    int c = a * b;  st.push(c);
                }
                else{
                    int c = (a / b);  st.push(c);
                }
            }
        }

        int ans = st.top();
        return ans;
    }
};