// Watch this Video-Solution one more time for Clearity.
// https://www.youtube.com/watch?v=V28fuTzNbag




// Wrong (Runtime error)

// 150. Evaluate Reverse Polish Notation
// https://leetcode.com/problems/evaluate-reverse-polish-notation/description/




















#include<bits/stdc++.h>
using namespace std;

void evalRPN(vector<string>& tokens) {
    stack<int> st;

    for(int i=0; i < tokens.size(); i++){
        if((tokens[i] != "+") || (tokens[i] != "-") || (tokens[i] != "*") || (tokens[i] != "/")){
            int a = 0;
            bool negative = false;
            for(int j=0; j < tokens[i].size(); j++){
                if(tokens[i] == "-"){
                    negative = true;
                }
                else{
                    a = (10 * a) + (int)(tokens[i][j]);
                }
            }
            if(negative == true){ a = -a;}
            cout << a << endl;
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
    cout << endl << ans << endl;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<string> a;
    for(int i=0; i<n; i++){
        string A; cin >> A;
        a.push_back(A);
    }

    evalRPN(a);
    
    return 0;
}


class Solution {
public:
    
};