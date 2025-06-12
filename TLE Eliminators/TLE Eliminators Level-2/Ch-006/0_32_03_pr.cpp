// Watch this Video-Solution one more time for clearity.
//  https://www.youtube.com/watch?v=2S7VLAkMK5g








// This is Mentor's code.
// Wrong.

// C - Factors of Factorial
// https://atcoder.jp/contests/abc052/tasks/arc067_a



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    long long n; cin >> n;
    // Formula:-
    // If, N = pow(p, a) * pow(q, b) * pow(r, c) * ...
    // (where, p, q, r... are prime factors of N)

    // No. of divisors of N = (a + 1) * (b + 1) * (c + 1) * ...


    long long MOD = 1e9 + 7;

    map<long long, long long> freqOfPrimes;
    for(long long i = 1; i <= n; i++){
        // Finding prime factors in TC = O(sqrt(n)).
        long long copyNum = i;

        while(copyNum%2 == 0){
            freqOfPrimes[2]++;
            copyNum /= 2;
        }

        for(long long j=3; j*j <= copyNum; j += 2){
            while(copyNum % i == 0){
                freqOfPrimes[i]++;
                copyNum /= i;
            }
        }
        if(copyNum > 2){
            freqOfPrimes[copyNum]++;
        }
    }

    long long divisors = 1;
    for(auto it: freqOfPrimes){
        divisors = ((divisors % MOD) * ((it.second + 1) % MOD)) % MOD;
    }

    cout << divisors << endl;
}