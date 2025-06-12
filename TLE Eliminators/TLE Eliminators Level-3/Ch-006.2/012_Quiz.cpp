// Correct.
// This is Mentor's code.

// Combinatorics-Template is very useful. So,
//  think about whether to write it or not.

// Combinatorics-Template from line-53 to 92.

// C. Array
// https://codeforces.com/contest/57/problem/C

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Combinatorics Template
int mod(int a, int m = MOD){
    return a % m;
}

template <class T> class Math{
public:
    vector<T> fact, inv_fact;
    Math(){}
    Math(int n){
        fact.resize(n);
        inv_fact.resize(n);
        fact[0] = inv_fact[0] = 1;
        for(int i=1; i < n; i++){
            fact[i] = mod(i * fact[i-1]);
            inv_fact[i] = modinv(fact[i]);
        }
    }
    T modinv(T x, T m = MOD){ return expo(x, m-2, m);}
    T expo(T base, T exp, T m = MOD){
        T res = 1;
        while(exp){
            if(exp & 1){
                res = mod(res * base, m);
            }
            base = mod(base * base, m);
            exp >>= 1;
        }
        return res;
    }
    T choose(T n, T k){
        if((k < 0) || (k > n)){
            return 0;
        }
        T ans = fact[n];
        ans = mod(ans * inv_fact[n-k]);
        ans = mod(ans * inv_fact[k]);
        return ans;
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    int ans = 0;

    const int N = 1e6;
    // N = 1e6, because to have a sufficiently large 'N',
    //  as, max(i + n - 1) = 2*n - 1.
    Math<int> m(N);
    for(int i=0; i <= n-1; i++){
        // i = no. I want to distribute
        ans = (ans + (2 * m.choose(i + n - 1, i))) % MOD;
    }

    // O/P
    cout << (ans - n + MOD) % MOD << endl;
}