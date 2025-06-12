// Correct.

// Exponentiation
// https://cses.fi/problemset/task/1095/




















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int result = 1;

    while(b > 0){
        if(b%2 == 1){
            (result *= a) %= MOD;

            (a *= a) %= MOD;
            b /= 2; 
        }
        else{
            (a *= a) %= MOD;
            b /= 2;
        }
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int a, b; cin >> a >> b;
        int ans = power(a, b);
        cout << ans << endl;
    }
}