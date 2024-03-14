// Correct.

// C. Rudolf and the Ugly String
// https://codeforces.com/problemset/problem/1941/C


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;
        int ans = 0;
        
        for(int i=0; i<n; i++){
            if((s[i] == 'm') && (s[i+1] == 'a') && (s[i+2] == 'p') && (s[i+3] == 'i') && (s[i+4] == 'e')){
                ans++;
                i += 5;
                i--;
            }
            else if((s[i] == 'm') && (s[i+1] == 'a') && (s[i+2] == 'p')){
                ans++;
                i += 3;
                i--;
            }
            else if((s[i] == 'p') && (s[i+1] == 'i') && (s[i+2] == 'e')){
                ans++;
                i += 3;
                i--;
            }
        }
        cout << ans << endl;
    }
}