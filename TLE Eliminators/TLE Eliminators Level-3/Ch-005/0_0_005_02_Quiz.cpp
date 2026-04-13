// Wrong.
// (This is My 2nd-time code.)

// Divisor Analysis
// https://cses.fi/problemset/task/2182



































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

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> x(n), k(n);
    int Sum_Of_Powers = 0;
    for(int i=0; i < n; i++){ 
        cin >> x[i] >> k[i];
        Sum_Of_Powers += (k[i] + 1);
    }

    // Solution
    int num = 1, sum = 1, prod = 1;
    for(int i=0; i < n; i++){
        num *= ((k[i] + 1) % MOD);

        int exp_1 = (k[i] + 1) % (MOD - 1);
        int exp_2 = (MOD - 2) % (MOD - 1);
        sum *= (( ((power(x[i], exp_1) - 1 + MOD) % MOD) * (power(x[i] - 1, exp_2) % MOD) ) % MOD);

        int exp = ( (((k[i] * (k[i] + 1)) / 2) % (MOD - 1)) * ((Sum_Of_Powers - (k[i] + 1)) % (MOD-1)) ) % (MOD-1);
        prod *= (power(x[i], exp) % MOD);
    }

    // O/P
    cout << num << " " << sum << " " << prod << endl;
}