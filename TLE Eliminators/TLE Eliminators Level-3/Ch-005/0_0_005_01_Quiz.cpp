// Wrong.

// Divisor Analysis
// https://cses.fi/problemset/task/2182




































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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> x(n), k(n);
    for(int i=0; i<n; i++){
        cin >> x[i];
        cin >> k[i];
    }

    // O/P
    int number = 1, sum = 1, multiplication = 1;
    int power_MOD_minus_1 = 1;
    for(int i=0; i<n; i++){
        number *= (k[i] + 1);
        number %= MOD;

        power_MOD_minus_1 *= (k[i] + 1);
        power_MOD_minus_1 %= (MOD - 1);
    }
    for(int i=0; i<n; i++){
        int x_inverse = power(x[i] - 1, MOD - 2) % MOD; // By Fermat's theorem.
        sum *= (power(x[i], k[i]+1) - 1) * x_inverse;
        sum %= MOD;
    }
    for(int i=0; i<n; i++){
        int exponent = (k[i] * power_MOD_minus_1 / 2) % (MOD - 1);
        multiplication *= power(x[i], exponent);
        multiplication %= MOD;
    }

    cout << number << " " << sum << " " << multiplication << endl;
}