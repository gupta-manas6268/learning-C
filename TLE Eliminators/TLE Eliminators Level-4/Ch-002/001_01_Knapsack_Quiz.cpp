// Wrong. (MLE)
// (This is Mentor's code.)

// (See '001_02_Knapsack_Quiz.cpp' & 
//  '001_04_Quiz.cpp'.)

// Book Shop
// https://cses.fi/problemset/task/1158



































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
    int n, x; cin >> n >> x;
    vector<int> Price(n), Pages(n);
    for(int i=0; i < n; i++){ cin >> Price[i];}
    for(int i=0; i < n; i++){ cin >> Pages[i];}

    // Solution
    vector<vector<int>> dp(n + 1, vector<int>(x + 1, 0));
    // dp[i][b] = max. no. of pages we can read from i'th book to n'th
    //             book s.t. allowed budget is 'b'.

    // dp[0][x] = max. pages we can read from whole array s.t. budget i
    //             is 'X'.

    // Base Case:  dp[n][anything] = 0, (i.e. we have exhausted the array.)

    for(int i = (n-1); i >= 0; i--){
        for(int b = 0; b <= x; b++){
            // Without space optimization
            int pick_i_index = 0, skip_i_index = 0;
            if(b >= Price[i]){
                pick_i_index = (Pages[i] + dp[i + 1][b - Price[i]]);
            }
            skip_i_index = dp[i + 1][b];
            dp[i][b] = max(pick_i_index, skip_i_index);
        }
    }
    // dp[i][j] = min. price we need to buy j-pages starting from 'i' to 'n-1'.

    // O/P
    cout << dp[0][x] << endl;       // (TT => Transition Time)
    // TC = (no. of states) * (TT per state)
    // TC = O(n * x) * O(1) 
    // TC = O(n * x) => O(1e8) => (TLE)

    // SC = O(n * x) => O(1e8) => (MLE)
    // 
    // Codeforces, Codechef -> 256 MB, 512 MB (Space Constraint)
    //          (i.e. can't store more than 10^7 integers.)
    //  So, Space Optimization is useful here.
    // 
    // CSES, Google competitions -> 1GB
}