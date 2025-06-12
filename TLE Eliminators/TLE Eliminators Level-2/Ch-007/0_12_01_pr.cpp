// Wrong.

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


struct stack{
    int size;
    int top;
    int *arr;
}Stack;

class MinStack {
public:
    vector<int> st;
    int count = 0;
    int mini;

    MinStack() {
        // Stack *sp;

    }
    
    void push(int val) {
        if(count == 0){
            mini = val;
        }
        else{
            mini = min(mini, val);
        }

        st.push_back(val);
    }
    
    void pop() {
        st.pop_back();
    }
    
    int top() {
        int ans = st[st.size()-1];
        return ans;
    }
    
    int getMin() {
        return mini;
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