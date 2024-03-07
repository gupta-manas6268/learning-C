// Correct.

// A. Rook
// https://codeforces.com/problemset/problem/1907/A


















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
        string s; cin >> s;
        char ch; int num;

        ch = s[0];
        num = (int)(s[1] - 48);

        char ans[5];
        for(int i=0; i<8; i++){
            ans[0] = (char)(i + 97);

            if(ans[0] != ch){
                ans[1] = (char)(num + 48);
                cout << ans[0] << ans[1] << endl;
            }
        }
        for(int i=1; i <= 8; i++){
            ans[0] = ch;

            if(i != num){
                ans[1] = (char)(i + 48);
                cout << ans[0] << ans[1] << endl;
            }
        }

    }
}