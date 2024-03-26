// Correct.

// A. Rectangle Cutting
// https://codeforces.com/problemset/problem/1928/A


















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
        int a, b; cin >> a >> b;
        
        bool ans = false;
        if((a % 2) == 0){
            int c, d;
            c = a/2;  d = 2 * b;

            if((c != b) || (d != a)){ ans = true;}
        }
        if(((b % 2) == 0) && (ans == false)){
            int c, d;
            c = 2 * a; d = b/2;

            if((c != b) || (d != a)){ ans = true;}
        }

        if(ans == true){ cout << "Yes" << endl;}
        else{ cout << "No" << endl;}
    }
}