// Correct.

// A. Problemsolving Log
// https://codeforces.com/problemset/problem/1914/A


















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

        int times[27] = {0};

        for(int i=0; i<n; i++){
            int index = (int)(s[i] - 64);
            times[index]++;
        }
        int ans = 0;
        for(int i=1; i <= 26; i++){
            if(times[i] >= i){
                ans++;
            }
        }
        cout << ans << endl;
    }
}