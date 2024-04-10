#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void sieve(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for(int i = 2; i*i <= n; i++){
        if(primes[i])
            for(int j = i*i; j <= n; j += i)
                primes[j] = false;
    }
    if(primes[n] == true){ cout << n << " is a Prime number.";}
    else{ cout << n << " is a Non-Prime number.";}
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    sieve(n);
}