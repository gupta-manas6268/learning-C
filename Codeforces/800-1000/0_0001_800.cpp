// Correct.
// See line-57 & 60 carefully.

// A. Recovering a Small String
// https://codeforces.com/problemset/problem/1931/A


















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

        int a, b, c;
        if(n <= 28){
            c = n-2;
            a = b = 1;
        }
        else if((n - 26) <= 27){
            c = 26;
            a = 1;
            b = (n - a - c);
        }
        else{
            c = 26; b = 26;
            a = (n - b - c);
        }

        char ans[3];
        // ans[0] = (a + 96); // These lines won't work properly.
        // ans[1] = (b + 96);
        // ans[2] = (c + 96);
        ans[0] = (char)(a + 96);
        ans[1] = (char)(b + 96);
        ans[2] = (char)(c + 96);

        for(int i=0; i<3; i++){
            cout << ans[i];
        }
        cout << endl;
    }
}