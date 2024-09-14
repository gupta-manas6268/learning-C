// 

// Exponentiation II
// https://cses.fi/problemset/task/1712




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp, int mod){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= mod;

            (base *= base) %= mod;
            exp /= 2;
        }
        else{
            (base *= base) %= mod;
            exp /= 2;
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
        // (1e9 + 7) => It is a prime number.

        int a, b, c; cin >> a >> b >> c;

        int x = power(b, c, MOD-1);
        int ans = power(a, x, MOD);

        cout << ans << endl;
    }
}