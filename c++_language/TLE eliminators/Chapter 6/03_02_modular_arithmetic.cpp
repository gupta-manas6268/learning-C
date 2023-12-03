#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void precompute(int n){
    int fact[n];
    fact[0] = fact[1] = 1;
    
    for(int i=2; i<n; i++){

        fact[i] = fact[i-1] * i;
        fact[i] %= MOD;
    }

    for(int i=n-2; i>=0; i--){
        invfact[i] = modinv(fact[i]);   // return, pow(fact[i], MOD-2)
        invfact[i] %= MOD;
    }
}

int nCr(int x, int y){
    if(y > x)
        return 0;

    int num = fact[x];

    num *= invfact[y];
    num %= MOD;

    num *= invfact[x-y];
    num %= MOD;
    
    return num;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    
}