// Correct.
// This is Mentor's code.

// This is both Mentor's Concept and Mentor's code.
//  So, Write it in Register Notes.


// In Slide-2, Page-31, f  r     r (X)
//     Above, 'f r r' is mistakenly written.

//    result = aCi * bCi * (i)!   (From Slide-2, Page-36.)

// C. The Intriguing Obsession
// https://codeforces.com/problemset/problem/869/C




























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353;
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

// Solution
int solve(int x, int y){  // No. of ways for 'x' to 'y'.
    Math<int> m(max(x, y) + 1);

    int result = 0;
    for(int i=0; i <= min(x, y); i++){
        result = ((result + ((m.choose(x, i) * m.choose(y, i)) % MOD) * m.fact[i]) % MOD) % MOD;
        // (Above line)↑          xCi               yCi                   (i)!
        //    result = aCi * bCi * (i)!   (From Slide-2, Page-36.)
    }

    return result;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int a, b, c; cin >> a >> b >> c;

    // O/P
    int ans = ((solve(a, b) * solve(b, c)) % MOD * solve(c, a))% MOD;
    cout << ans << endl;
}