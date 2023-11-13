#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> factor(int n){
    vector<int> facts;
    for(int i = 2; i*i <= n; i++){
        while (n%i == 0){
            facts.push_back(i);
            n /= i;
        }
    }

    if(n > 1)
        facts.push_back(n);

    return facts;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;

    vector<int> factors = factor(n); // Store the result in a vector.

    // Print the prime factors
    for(int factor : factors) {  // The loop will iterates through the 'factors' vector.
        cout << factor << " ";
    }
}