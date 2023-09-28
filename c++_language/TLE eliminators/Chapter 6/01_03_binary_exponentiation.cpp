#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

ll int pow (ll int base, ll int exp){
    ll int res = 1;

    while(exp > 0){
        if(exp % 2)
            (res *= base) %= MOD;

        (base *= base) %= MOD;
        exp /= 2;
    }

    return res;
};
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        
    }
}