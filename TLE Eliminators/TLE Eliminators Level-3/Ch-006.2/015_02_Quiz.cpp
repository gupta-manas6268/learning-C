// Correct.
// This is My version of Mentor's code.

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

vector<int> fact, inv_fact;
int combination(int n, int r){ // O(1)
    return (((fact[n] * inv_fact[r]) % MOD) * inv_fact[n-r]) % MOD;
}
// Combinatorics Template End

// Solution
int solve(int x, int y){  // No. of ways for 'x' to 'y'.
    int result = 0;
    for(int i=0; i <= min(x, y); i++){
        result += ((((combination(x, i) * combination(y, i)) % MOD) * fact[i]) % MOD) % MOD;
        // (Above line)↑          xCi               yCi                   (i)!
        //    result = aCi * bCi * (i)!   (From Slide-2, Page-36.)
        result %= MOD;
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
    int n = max(max(a, b), c);

    // Combinatorics Template
    fact.push_back(1);
    
    // Pre-computation of Factorial.
    for(int i=1; i <= n; i++){ // O(n)
        int temp = (fact[i-1] * i) % MOD;
        fact.push_back(temp);
    }
    // Pre-computation of Inverse-Factorial.
    vector<int> inv_fact_Temp(n + 1); // inverse factorial
    inv_fact_Temp[n] = power(fact[n], MOD-2) % MOD; // O(log(M))
    for(int i = n-1; i >= 0; i--){ // O(n)
        inv_fact_Temp[i] = (inv_fact_Temp[i+1] * (i+1)) % MOD;
    }
    inv_fact = inv_fact_Temp;

    // O/P
    int ans = (((solve(a, b) * solve(b, c)) % MOD) * solve(c, a))% MOD;
    cout << ans << endl;
}