#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Power
int power(int base, int exp, int mod){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= mod;

            (base *= base) %= mod;
            exp /= 2;
        }
        else{
            (base *= base) %= mod;
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
    for(int i=0; i < n; i++){ cin >> x[i] >> k[i];}

    // Solution
    int num = 1, sum = 1, prod = 1;
    for(int i=0; i < n; i++){
        num *= (k[i]+1);
        sum *= (power(x[i], k[i]+1, MOD)-1)/(x[i]-1);
        num %= MOD; sum %= MOD;
    }
    for(int i=0; i < n; i++){
        int exp = ((k[i] * (k[i]+1))/2) % (MOD-1);
        exp *= (num / (k[i]+1));
        exp %= (MOD-1);
        prod *= power(x[i], exp, MOD);
        prod %= MOD;
    }

    // O/P
    cout << num << " " << sum << " " << prod << endl;
}