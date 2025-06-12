// Correct.
//  (I don't know anything about this Problem Concept
//    So, think about whether to write Concept or not in Note-Book.
//    But, it's my Code. So, don't write Code.)

// This is My version of Mentor's code.


// D. Triangle Coloring
// https://codeforces.com/problemset/problem/1795/D






























// In Slide-3, Page-16
//  Observation-3 : Every triple can have either 1-extra
//              R(Red) ball or 1-extra B(Blue) ball.
// 
//  Observation-5 : 
//          (No matter What is the configuration -> answer from 1-triple) = (Sum of connection - min. connection).
// 
//  Observation-6 : if the configuration is fixed ....




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353;
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
    int n; cin >> n;
    vector<int> w(n);
    for(int i=0; i<n; i++){ cin >> w[i];}

    // Solution
    vector<int> fact(n/3 + 1);
    fact[0] = 1;

    // Pre-computation.
    for(int i=1; i <= n/3; i++){ // O(n)
        fact[i] = (fact[i-1] * i) % MOD;
    }
    int i_fact = power(fact[n/6], MOD-2) % MOD; // O(log(M))
    
    int ans = (((fact[n/3] * i_fact) % MOD) * i_fact) % MOD;
    for(int i=0; i < n/3; i++){
        int j = 3*i;
        int mini = min(min(w[j], w[j+1]), w[j+2]);

        int nodes = 0;
        for(int k = j; k <= j+2; k++){
            if(w[k] == mini){ nodes++;}
        }

        ans *= nodes;
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
}