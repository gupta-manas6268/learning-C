// Quiz-2: Given a positive integer N <= 1e6, at every 
//       step the following 3 things can happen to N 
//       with equal probability.
//          N = N / 2 (N = [N / 2]) ([] => GIF (int))
//          N = N - 1
//          N remains unchanged
//      Find expected number of steps it will take to 
//       convert for N to become 0




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
    vector<double> dp(n, -1);

    auto f = [&](int n, auto &&F) -> int {
        if(n == 0){ return 0;}
        if(dp[n] != -1){ return dp[n];}

        return dp[n] = 1.5 + (0.5 * (F(n-1, F) + F(n/2, F)));
    };

    // O/P
    cout << f(n, f) << endl;
}