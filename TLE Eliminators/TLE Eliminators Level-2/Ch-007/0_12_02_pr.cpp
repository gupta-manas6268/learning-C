// Correct.
// (This is My code in 2nd Revision time.)

// 155. Min Stack
// https://leetcode.com/problems/min-stack/description/



































#include<bits/stdc++.h>
using namespace std;

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    return 0;
}



class MinStack {
public:
    stack<int> st, mini;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(mini.empty() == true){
            mini.push(val);
        }
        else{
            if(mini.top() >= val){
                mini.push(val);
            }
        }
    }

    void pop() {
        if((mini.empty() != true) && (st.empty() != true)){
            if(st.top() == mini.top()){
                mini.pop();
            }
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
    
/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */