// Correct.

// C. Jury Meeting
// https://codeforces.com/problemset/problem/1569/C




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353;
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

int combination(int n, int r, vector<int>& fact, vector<int>& i_fact){ // O(1)
    return (((fact[n] * i_fact[r]) % MOD) * i_fact[n-r]) % MOD;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i < n; i++){ cin >> a[i];}

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


        sort(a.begin(), a.end());
        int maxi = a[n-1];
        int ans = fact[n];
        if(a[n-2] >= (maxi-1)){
            if(a[n-2] == maxi){ ans = fact[n];}
            else{
                int index = lower_bound(a.begin(), a.end(), maxi-1) - a.begin();
                
                int reduction = 0;
                for(int i=0; i <= index; i++){
                    reduction += ((((combination(index, i, fact, inv_fact) * fact[i]) % MOD) * (fact[n-i-1])) % MOD);
                    reduction %= MOD;
                }

                ans = ((ans - reduction + MOD) % MOD);
            }
        }
        else{ ans = 0;}

        // O/P
        cout << ans << endl;
    }
}