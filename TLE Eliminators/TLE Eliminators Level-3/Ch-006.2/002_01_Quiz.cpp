// 

// Creating Strings II
// https://cses.fi/problemset/task/1715



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

        }
        (base *= base) %= MOD;
        exp /= 2;
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
    string s; cin >> s;

    // O/P
    int character[26] = {0};
    int n = s.length();
    for(int i=0; i<n; i++){
        int val = (int)(s[i] - 97);
        character[val]++;
    }

    vector<int> fact(n+1);
    vector<int> inv_fact(n+1);
    for(int i=0; i<=n; i++){
        if(i == 0){
            fact[i] = 1;
        }
        else{
            fact[i] = (fact[i-1] * i) % MOD; 
        }
    }
    inv_fact[n] = power(fact[n], MOD-2) % MOD;
    for(int i = n-1; i >= 0; i--){
        inv_fact[i] = (inv_fact[i+1] * (i+1)) % MOD;
    }

    int ans = fact[n];
    for(int i=0; i < 26; i++){
        ans *= inv_fact[character[0]];
        ans %= MOD;
    }

    cout << ans << endl;
}