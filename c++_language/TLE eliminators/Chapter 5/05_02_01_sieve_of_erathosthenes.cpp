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
            for(int j=i*2; j<=n; j+=i)
                primes[j] = false;

            cout<<i<<" ";
        }
    }
}