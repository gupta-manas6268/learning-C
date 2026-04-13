// NSR -> Next Smaller element towards Right of that element.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(vector<int> v, int n){
    vector<int> ans(n);
    stack<int> st;

    // NSR
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() >= v[i]){  // This line has changed.
            st.pop();
        }

        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(v[i]);
    }
    for(auto it:ans){
        cout << it << " ";
    }
    cout << endl;

    // TC = O(n).
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> v(n);
    for(auto &it:v){ cin >> it;}

    solve(v, n);
}