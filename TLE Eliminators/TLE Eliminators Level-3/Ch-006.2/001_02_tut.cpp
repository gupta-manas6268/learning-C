// This is Clean-Version of code of '001_01_tut.cpp'.


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}

// O(1).
int combination(int n, int r, int mod, vector<int>& fact, vector<int>& i_fact){
    return (fact[n] * (i_fact[r] * i_fact[n-r]) % mod) % mod;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, r; cin >> n >> r;

    // Solution
    vector<int> fact(n + 1);
    vector<int> i_fact(n + 1); // inverse factorial
    fact[0] = 1;

    // Pre-computation.
    for(int i=1; i <= n; i++){ // O(n)
        fact[i] = (fact[i-1] * i) % MOD;
    }
    i_fact[n] = power(fact[n], MOD-2) % MOD; // O(log(M))
    for(int i = n-1; i >= 0; i--){ // O(n)
        i_fact[i] = (i_fact[i+1] * (i+1)) % MOD;
    }

    // O/P
    // Pre-computation TC = O(n).
    cout << combination(8, 6, MOD, fact, i_fact) << endl;
}