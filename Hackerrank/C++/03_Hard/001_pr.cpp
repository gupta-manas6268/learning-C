// 

// Bit Array
// https://www.hackerrank.com/challenges/bitset-1/problem?isFullScreen=true



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

    // Code. 
    long long N, S, P, Q;
    cin >> N >> S >> P >> Q;

    const long long MOD = (1LL << 31);
    long long a = S % MOD;
    long long count = 1;
    long long first_occurrence = a;
    
    long long previous = a;
    for (long long i = 1; i < N; ++i) {
        a = (previous * P + Q) % MOD;

        if (a == first_occurrence) break; // Cycle detected
        count++;

        previous = a;
    }

    cout << count << endl;
}