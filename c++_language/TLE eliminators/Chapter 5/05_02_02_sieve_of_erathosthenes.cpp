#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    int primes[n+1];
    fill(primes, primes + n+1, true);

    primes[0] = primes[1] = false;

    for(int i=2; i<=n; i++){  
        if(primes[i]){  // If 'i' is has been marked for prime  i.e. "primes[i] = true".
            for(int j=i*i; j<=n; j+=i) // Changed.
                primes[j] = false;

            cout<<i<<" ";
        }
    }

    // TC = ((n/2) + (n/3) + (n/5) + (n/7) ...) = n * ((1/2) + (1/3) + (1/5) + (1/7) ...)
    // TC = n * log(log(n)).

    // Learn Harmonic Series Sum proof, for a single time.
}