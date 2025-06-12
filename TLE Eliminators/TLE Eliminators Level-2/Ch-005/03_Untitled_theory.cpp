#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int n = 100;
int SPF[n+1]; // SPF => Smallest Prime Factor.
// We are declaring this array outside the function, because
//  inside function such large array will give us segmentation
//  fault.

void solve() {
    // Initialize the SPF array
    for(int i = 0; i <= n; i++) {
        SPF[i] = i;
    }
    
    // Sieve of Eratosthenes for smallest prime factor
    for(int i = 2; i * i <= n; i++) {
        if(SPF[i] == i) {
            for(int j = i * i; j <= n; j += i) {
                if(SPF[j] == j) {
                    SPF[j] = i;
                }
            }
        }
    }

    int num = n; // Example number whose prime factors we want to find

    // Prime factors of 'num'
    vector<int> prime_factors;
    while(num > 1) {
        prime_factors.push_back(SPF[num]);
        num /= SPF[num]; 
    }

    // Output prime factors
    cout << "Prime factors of " << n << ": ";
    // for (const int& factor : prime_factors) {   // Both lines work well.
    for (int& factor : prime_factors) {
        cout << factor << " ";
    }
    cout << endl;

    // Output SPF array
    for(int i = 0; i <= n; i++) {
        cout << i << " = " << SPF[i] << endl;
    }
}

signed main() {
    ios::sync_with_stdio(false); 
    cin.tie(NULL);

    solve();
}
