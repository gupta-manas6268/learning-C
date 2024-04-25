// Next Greater Element(NGE), by using Stack.



#include<bits/stdc++.h>
using namespace std;

vector<int> NGE(vector<int> v){
    vector<int> nge(v.size());
    stack<int> st;
    for(int i=0; i < v.size(); i++){
        while(!st.empty() && v[i] > v[st.top()]){
            nge[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }

    while(!st.empty()){
        nge[st.top()] = -1;
        st.pop();
    }

    return nge;
}

int main(){
    int n; cin >> n;

    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << endl;

    vector<int> nge = NGE(v);
    for(int i=0; i<n; i++){
        cout << v[i] << " " << (nge[i] == -1 ? -1: v[nge[i]]) << endl;
        // (nge[i] == -1 ? -1: v[nge[i]]),  this is ternary if-else.
    }

    // I/P:
    // 6
    // 4  5  2  25  7  8

    // O/P:
    // 5  25  25  -1  8  -1

    return 0;
}