// Watch this Video-Solution one more time for clearity.
//  https://www.youtube.com/watch?v=2S7VLAkMK5g




// This is my version Mentor's code.
// Wrong.

// C - Factors of Factorial
// https://atcoder.jp/contests/abc052/tasks/arc067_a



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> sieve(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i] == true){
            for(int j = i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    vector<int> ans;
    for(int i=2; i <= n; i++){
        if(primes[i] == true){
            ans.push_back(i);
        }
    }

    return ans;
}

map<int, int> m;
void factor(int n){
    vector<int> facts;
    for(int i=2; i*i <= n; i++){
        int count = 0;
        while(n%i == 0){
            count++;
            n /= i;
        }

        auto it = m.find(i);
        if(it != m.end()){
            m[i] += count;
        }
        else{
            m[i] = count;
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    // Formula:-
    // If, N = pow(p, a) * pow(q, b) * pow(r, c) * ...
    // (where, p, q, r... are prime factors of N)

    // No. of divisors of N = (a + 1) * (b + 1) * (c + 1) * ...


    // vector<int> prime = sieve(n);
    for(int i=2; i <= n; i++){
        factor(n);
    }

    int ans = 1;
    for(auto &Power: m){
        ans *= (Power.second + 1);
    }

    cout << ans << endl;
}