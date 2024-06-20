// Wrong. (Runtime error)

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
    // approach -> to maintain a monotonic stack which stores the 
    //              minimum of all the elements in the stack at 
    //              it's top.

    // push = [4, 3, 5, 1, 2]
    // stack =            [4, 3, 5, 1, 2]
    // monotonic stack -> [4, 3, 3, 1, 1] -> top() -> getMin()

    // getMin()
    // after 1st insertion :- 4
    // after 2nd insertion :- 3
    // after 3rd insertion :- 3
    // after 4th insertion :- 1
    // after 5th insertion :- 1

    vector<int> st;
    int count = 0;
    int mini;
    vector<int> Mini;

    MinStack() {

    }
    
    void push(int val) {
        if(count == 0){
            mini = val;
        }
        else{
            mini = min(mini, val);
        }

        st.push_back(val);
        Mini.push_back(mini);
        count++;
    }
    
    void pop() {
        st.pop_back();
        Mini.pop_back();
        mini = Mini[Mini.size()-1];
        count--;
    }
    
    int top() {
        int ans = st[st.size()-1];
        return ans;
    }
    
    int getMin() {
        int ans = Mini[Mini.size()-1];
        return ans;
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