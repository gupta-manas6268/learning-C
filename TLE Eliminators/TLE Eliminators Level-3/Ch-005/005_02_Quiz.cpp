// Correct.
// This is Mentor's code.

// Divisor Analysis
// https://cses.fi/problemset/task/2182



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int expo(int base, int pow){
    int ans = 1;
    while(pow){
        if(pow & 1){
            ans = ans * base % MOD;
        }
        base = base * base % MOD;
        pow /= 2;
    }

    return ans;
}

int x[100001], k[100001];

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    for(int i=0; i<n; i++){
        cin >> x[i] >> k[i];
    }

    // O/P
    int count = 1, sum = 1, product = 1, count_2 = 1;
    for(int i=0; i<n; i++){
        count = (count * (k[i] + 1)) % MOD;
        sum = sum * (expo(x[i], k[i]+1) - 1) % MOD * expo(x[i]-1, MOD - 2) % MOD;
        product = expo(product, k[i]+1) * expo(expo(x[i], (k[i] * (k[i] + 1)/ 2)), count_2) % MOD;
        count_2 = count_2 * (k[i] + 1) % (MOD - 1);
    }

    cout << count << " " << sum << " " << product << endl;
}