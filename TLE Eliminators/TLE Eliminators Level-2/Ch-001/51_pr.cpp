// 

// Creating Strings
// https://cses.fi/problemset/task/1622



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(string ans, string s, int n){
    if(ans.size() == n){
        cout << ans << endl;
        return;
    }

    for(int i=0; i<n; i++){
        solve(ans + s[i]);
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    string s; cin >> s;
    int n = s.length();

    
}