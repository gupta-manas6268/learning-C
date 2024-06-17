// This is Mentor's code.
// Correct.

// B. Longest Divisors Interval
// https://codeforces.com/contest/1855/problem/B

















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

    int tc; cin >> tc;

    while (tc--){
        long long n; cin >> n;
        int ans = 1;

        // Here, always longest divisor interval will start from 1.
        for(long long i=2; i <= n; i++){
            if(n%i == 0){
                ans++;
            }
            else{
                break;
            }
        }

        cout << ans << endl;
    }
}