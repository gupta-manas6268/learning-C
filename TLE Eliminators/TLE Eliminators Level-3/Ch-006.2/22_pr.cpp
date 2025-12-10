// Correct.

// B. Dreamoon and WiFi
// https://codeforces.com/problemset/problem/476/B




































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

int combination(int n, int r, vector<int>& fact, vector<int>& i_fact){ // O(1)
    return (((fact[n] * i_fact[r]) % MOD) * i_fact[n-r]) % MOD;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    string s1, s2; cin >> s1 >> s2;

    // Combinatorics-Template
    int n = s1.length();
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

    // Solution
    int sum = 0;
    for(int i=0; i < n; i++){
        if(s1[i] == '+'){ sum++;}
        else{ sum--;}
    }

    int sum_2 = 0, no_of_Unknown = 0;
    for(int i=0; i < n; i++){
        if(s2[i] == '+'){ sum_2++;}
        else if(s2[i] == '-'){ sum_2--;}
        else{ no_of_Unknown++;}
    }

    int val = (sum - sum_2);
    long double ans = 0;
    if((abs(val) % 2) == (no_of_Unknown % 2)){
        if(abs(val) <= no_of_Unknown){
            if(no_of_Unknown == 0){ ans = 1;}
            else{
                int r = (no_of_Unknown - abs(val))/ 2;
                // cout << r << endl;
                ans = ((float)(combination(no_of_Unknown, r, fact, inv_fact))/ (float)(power(2, no_of_Unknown)));
            }
        }
        else{ ans = 0;}
    }
    else{ ans = 0;}

    // O/P
    cout << setprecision(12) << fixed << ans << endl;
}