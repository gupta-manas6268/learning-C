// This is Mentor' code. (Complete this code.)
// 

// HS08PAUL - A conjecture of Paul Erdős
// https://www.spoj.com/problems/HS08PAUL/



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int N = 10000007;   // N = pow(10,7).
bool sieve[N];
int ans[N];

vector<bool> sieve(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i] == true){
            for(int j=i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    vector<bool> ans;
    for(int i=0; i<=n; i++){
        ans.push_back(primes[i]);
    }

    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        
    }
}