// This is Mentor's code.
// Correct.

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

    stack<int> s, pre;

    MinStack() {

    }
    
    void push(int val) {
        // s.push(val); // This line gives Runtime error in Leetcode.
                        //  but line-68 and -72 didn't give error.

        if(s.empty()){
            s.push(val);  // This line works fine.
            pre.push(val);
        }
        else{
            s.push(val);  // This line works fine.
            pre.push(min(val, pre.top()));
        }
    }
    
    void pop() {
        s.pop();
        pre.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return pre.top();
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