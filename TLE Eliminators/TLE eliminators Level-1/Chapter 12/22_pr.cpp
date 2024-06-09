// Correct.

// Xor Palindrome
// https://www.codechef.com/problems/XOR_PAL



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;

        int different = 0;
        for(int i=0; i < (n/2); i++){
            if(s[i] != s[n-1-i]){
                different++;
            }
        }
        int ans = (different/2) + (different % 2);
        cout << ans << endl;
    }
}