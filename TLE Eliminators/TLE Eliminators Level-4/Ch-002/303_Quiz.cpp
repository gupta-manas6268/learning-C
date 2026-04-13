// 

// E - Knapsack 2 
// https://atcoder.jp/contests/dp/tasks/dp_e



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
    int N, W; cin >> N >> W;
    vector<int> w(N), v(N);
    for(int i=0; i < N; i++){ cin >> w[i] >> v[i];}

    // Solution

    // Knapsack-1:
    // dp[i][j] => max. possible value if we consider only
    //        1st i-items & fill j-units of weight.
    // 
    // dp[i][j] -> dp[i-1][j-w[i]] + val[i-1]
    //          -> dp[i-1][j]
    // 
    // TC = O(N * W) = O(100 * 1e9) = O(1e11) => (X)(TLE)



    // Knapsack-2:
    // dp[i][j] => max. weight to obtain j-value while 
    //        considering 1st i-items.
    // 
    // dp[i][j] -> w[i-1] + dp[i-1][j-val[i-1]]
    //          -> dp[i-1][j]
    // 
    // TC = O(N * (max. value v[i] can get with max. N-elements))
    // TC = O(N * (N * v[i])) = O(100 * 1e5) = O(1e7)


    int sum = accumulate(v.begin(), v.end(), 0); // Sum of all elements in vector-v
    // In old dp SC => n * Capacity = n * w
    // In new dp SC => n * (sum of values of array)
    
    vector<vector<int>> dp(105, vector<int> (1e5+5, 0));
    for(int val = 1; val <= sum; val++){
        dp[0][val] = INT_MAX;
    }
    
    for(int i = 1; i <= N; i++){
        for(int val = 0; val <= sum; val++){
            if(val >= v[i-1]){ // Take
                dp[i][val] = min(w[i-1] + dp[i-1][val - v[i-1]], dp[i-1][val]);
            }
            else{              // Not Take
                dp[i][val] = dp[i-1][val];
            }
        }
    }
    
    int ans = 0;
    for(int val = 0; val <= sum; val++){
        if(dp[N][val] <= W){
            ans = max(ans, val);
        }
    }
    
    // O/P
    cout << ans << endl;
    // TC = O(N * (max. value v[i] can get with max. N-elements))
    // TC = O(N * (N * v[i])) = O(100 * 1e5) = O(1e7)

    // SC = O(n * (sum of values of array))

}