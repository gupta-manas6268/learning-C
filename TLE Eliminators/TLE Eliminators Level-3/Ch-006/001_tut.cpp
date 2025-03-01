#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int combination(int n, int r, int m, vector<int>& fact, vector<int>& i_fact){
    return mod_mul(fact[n], mod_mul(i_fact[r], i_fact[n-r], m), m);
    // mod_mul => mod_multiplication, (Explained in Slide-1, Page-16.)
}

void solve(){
    int n = 10;
    vector<int> fact(n + 1);
    vector<int> i_fact(n + 1); // inverse factorial
    fact[0] = 1;

    // Pre-computation.
    for(int i=1; i <= n; i++){ // O(n)
        fact[i] = mod_mul(fact[i-1], i, MOD);
        // i_fact[i] = mm_inv_prime(fact[n], MOD);
        // mm_inv_prime => mod_inverse_prime
    }
    i_fact[n] = mm_inv_prime(fact[n], MOD); // O(log(M))
    for(int i = n-1; i >= 0; i--){ // O(n)
        i_fact[i] = mod_mul(i_fact[i+1], i+1, MOD);
    }

    // Pre-computation TC = O(n).
    cout << combination1(8, 6, MOD, fact, i_fact) << endl;
}

