// Wrong. (TLE + MLE)
// (This is Mentor's code.) 

// This code is slower than '001_01_Quiz.cpp',
//  due to that we can also get TLE, in tight
//  time constraints.
// 
// (See line-91 to 97.)

// (Choose whether to write this code or not.)

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
    vector<vector<int>> dp(x + 1, vector<int>(n + 1, 0));
    // dp[b][i] = max. no. of pages we can read from i'th book to n'th
    //             book s.t. allowed budget is 'b'.
    
    // dp[x][0] = max. pages we can read from whole array s.t. budget i
    //             is 'X'.
    
    // Base Case:  dp[anything][n] = 0, (i.e. we have exhausted the array.)
    
    for(int i = (n-1); i >= 0; i--){
        for(int b = 0; b <= x; b++){
            int pick_i_index = 0, skip_i_index = 0;
            if(b >= Price[i]){
                pick_i_index = (Pages[i] + dp[b - Price[i]][i + 1]);
            }
            skip_i_index = dp[b][i + 1];
            dp[b][i] = max(pick_i_index, skip_i_index);
        }
    }

    // O/P
    cout << dp[x][0] << endl;       // (TT => Transition Time)
    // TC = (no. of states) * (TT per state)
    // TC = O(n * x) * O(1) 
    // TC = O(n * x) => O(1e8) => (TLE)

    // But, here in 'dp[b][i]' is slower than 'dp[i][b]',
    //       because of Compiler design in which 2-D
    //       array is stored as 1-D array by which
    //       it is faster to solve in 'dp[i][b]', then
    //       in 'dp[b][i]'
    // 
    // See, Slide-2, Page-7 to 9.

    // SC = O(n * x) => O(1e8) => (MLE)
}