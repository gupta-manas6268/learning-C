// This is Mentor's code.
// Correct.

// B. Reverse Binary Strings
// https://codeforces.com/contest/1437/problem/B


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; cin >> s;
        int zero_Count = 0, one_Count = 0;
        for(int i=0; i < n-1; i++){
            if(s[i] == s[i+1]){
                if(s[i] == '0'){
                    zero_Count++;
                }
                else{
                    one_Count++;
                }
            }
        }

        cout << max(zero_Count, one_Count) << endl;
    }
}