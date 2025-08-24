// NGR -> Next Greater element in Right of that element.

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
vector<int> solve(int n, vector<int> v){
    vector<int> ans(n);
    stack<int> st;

    // NGR
    for(int i = n-1; i >= 0; i--){
        while(!st.empty() && st.top() <= v[i]){
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
    
    return ans;
    // TC = O(n).
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> v(n);
    for(auto &it:v){ cin >> it;}

    // Solution
    vector<int> ans = solve(n, v);

    // O/P
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}