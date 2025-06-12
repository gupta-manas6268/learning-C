// Correct.

// 20. Valid Parentheses
// https://leetcode.com/problems/valid-parentheses/description/




















#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}

bool match(char a, char b){
    if((a == '{') && (b == '}')){ return true;}
    if((a == '(') && (b == ')')){ return true;}
    if((a == '[') && (b == ']')){ return true;}

    else{ return false;}
}

bool Parenthesis_Match(string s){
    stack<int> st;

    char popped_ch;
    for(int i=0; s[i] != '\0'; i++){
        if((s[i] == '(') || (s[i] == '[') || (s[i] == '{')){
            st.push(s[i]);
        }
        else if((s[i] == ')') || (s[i] == ']') || (s[i] == '}')){
            if(st.empty() == true){ return false;}
            else{
                popped_ch = st.top();
                st.pop();

                if(match(popped_ch, s[i]) == false){
                    return false;
                }
            }
        }
    }

    if(st.empty() == true){ return true;}
    else{ return false;}
}

class Solution {
public:
    bool isValid(string s) {
        if(Parenthesis_Match(s) == true){ return true;}
        else{ return false;}
    }
};