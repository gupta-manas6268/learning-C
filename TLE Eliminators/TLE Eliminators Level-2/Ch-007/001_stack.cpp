#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.push(5);
    cout << st.top() << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    
    solve();
}