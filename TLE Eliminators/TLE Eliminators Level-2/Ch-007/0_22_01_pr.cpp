// Wrong (Runtime error)

// 946. Validate Stack Sequences
// https://leetcode.com/problems/validate-stack-sequences/description/



















#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        deque<int> Pop;
        for(int i=0; i < popped.size(); i++){
            Pop.push_back(popped[i]);
        }

        stack<int> st;
        vector<int> temp;
        bool Ans = true;
        for(int i=0; i < pushed.size(); i++){
            st.push(pushed[i]);
            temp.push_back(pushed[i]);
            
            while(Pop[0] == st.top()){
                st.pop();
                Pop.pop_front();
            }

            int search = Pop[0];
            vector<int> :: iterator it;
            it = find(temp.begin(), temp.end(), search);

            if(it != temp.end()){ Ans = false; break;}
        }

        return Ans;
    }
};

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n; cin >> n;
    vector<int> pushed, popped;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        pushed.push_back(a);
    }
    for(int i=0; i<n; i++){
        int a; cin >> a;
        popped.push_back(a);
    }

    Solution sol;
    bool ans = sol.validateStackSequences(pushed, popped);
    
    if(ans == true){ cout << "true" << endl;}
    else{ cout << "false" << endl;}

    return 0;
}


