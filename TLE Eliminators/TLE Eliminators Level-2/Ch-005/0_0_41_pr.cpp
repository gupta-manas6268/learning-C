// Correct.
// (This is Mentor's code.)

// C. Fadi and LCM
// https://codeforces.com/problemset/problem/1285/C



































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

    // I/P
    int x; cin >> x;

    // Solution
    pair<int, int> ans = {-1,-1};
    for(int a=1; a*a <= x; a++){
        if(x%a == 0){
            int b = x/a;
            if(__gcd(a,b) == 1){  // TC = O(log(power(10, 12))).
                                  //  As, (X)max. = power(10, 12).
                ans = {a, b};
            }
        }
    }

    // O/P
    cout << ans.first << " " << ans.second << endl;
    // TC = O(sqrt(x) * log(power(10, 12))).
}