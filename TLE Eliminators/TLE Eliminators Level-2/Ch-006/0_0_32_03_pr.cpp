// Correct.
// (This is My 2nd-time code.)

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

    // I/P
    int n; cin >> n;

    // Solution

    // Formula:-
    // If, N = pow(p, a) * pow(q, b) * pow(r, c) * ...
    // (where, p, q, r... are prime factors of N)

    // No. of divisors of N = (a + 1) * (b + 1) * (c + 1) * ...

    map<int,int> factor;
    for(int num=2; num <= n; num++){
        int temp_num = num;
        for(int i=2; i*i <= temp_num; i++){
            if((temp_num % i) == 0){
                factor[i]++;
                temp_num /= i;
                i--;
            }
        }
        if(temp_num > 1){
            factor[temp_num]++;
        }
    }

    int ans = 1;
    for(int i=2; i <= n; i++){
        ans *= (factor[i] + 1);
        ans %= MOD;
    }

    // O/P
    cout << ans << endl;
    // TC = O(n * sqrt(n))
}