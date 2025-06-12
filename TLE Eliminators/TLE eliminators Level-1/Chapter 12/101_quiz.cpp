// https://codeforces.com/problemset/problem/1890/B










#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool is_good(string s){
    for(int i=1; i < s.size(); i++)
        if(s[i] == s[i-1])
            return false;

    return true;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // YES: 's' is already good.
    // NO:  both 's' and 't' are not good.

    int tc; cin >> tc;

    while (tc--){
        int n, m; cin >> n >> m;
        string s, t; cin >> s >> t;

        if(is_good(s)){
            cout << "Yes" << endl;
            continue;
        }

        if(!is_good(t)){
            cout << "No" << endl;
            continue;
        }

        bool flag = true;

        for(int i=1; i<n; i++){
            if(s[i] == s[i-1]){
                if(s[i] == t[0] || s[i] == t.back())
                    flag = false;
            }
        }

        if(flag){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
        
    }
}