// See this code in Chat-GPT for line-35.
// (which is already in Chat-GPT, chat.)

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
    // return mod_mul(fact[n], mod_mul(i_fact[r], i_fact[n-r], mod), mod);
    // return (fact[n] * (i_fact[r] * i_fact[n-r]) % mod) % mod;
    return (((fact[n] * i_fact[r]) % MOD) * i_fact[n-r]) % mod;
    // mod_mul => mod_multiplication, (Explained in Slide-1, Page-16.)
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
    vector<int> inv_fact(n + 1); // inverse factorial
    fact[0] = 1;

    // Pre-computation of Factorial.
    for(int i=1; i <= n; i++){ // O(n)
        fact[i] = (fact[i-1] * i) % MOD;
    }
    // Pre-computation of Inverse-Factorial.
    inv_fact[n] = power(fact[n], MOD-2) % MOD; // O(log(M))
    for(int i = n-1; i >= 0; i--){ // O(n)
        inv_fact[i] = (inv_fact[i+1] * (i+1)) % MOD;
    }

    // O/P
    // Pre-computation TC = O(n).
    cout << combination(8, 6, MOD, fact, inv_fact) << endl;
}