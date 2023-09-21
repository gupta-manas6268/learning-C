#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void precomput(){
    fact[0] = fact[1] = 1;
    for(int i=2; i<N; i++){
        fact[i] = fact[i-1] * i;
        fact[i] %= MOD;
    }
    for(int i=N-2; i>=0; i--){
        invfact[i] = modinv(fact[i]);   // return 
        invfact[i] %= MOD;
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // a^p
    // nCr = fact[n]/ fact[r] * fact[n-r];

}