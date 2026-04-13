// Correct.

// Christmas Party
// https://cses.fi/problemset/task/1717



// Dearrangement Problem: This is Maths + Recursion.
//  So, watch Video-Solution again, & write Math
//   equations & formulas in Register immediately.































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Power
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

int combination(int n, int r, int mod, vector<int>& fact, vector<int>& i_fact){ // O(1)
    return (((fact[n] * i_fact[r]) % MOD) * i_fact[n-r]) % mod;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    
    // Dearrangement Problem: This is Maths + Recursion.
    //  So, watch Video-Solution again, & write Math
    //   equations & formulas in Register immediately.

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

    int ans = 0;
    for(int k=2; k <= n; k++){
        ans += (power(-1,k) * inv_fact[k]);
        ans += MOD;

        ans %= MOD;
    }
    ans *= fact[n];
    ans %= MOD;

    // O/P
    cout << ans << endl;
}