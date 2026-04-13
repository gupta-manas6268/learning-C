// 

// D. Make Them Equal
// https://codeforces.com/contest/1633/problem/D



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

    // Solution
    vector<int> Dp(1e3+10, INT_MAX);
    int max_Sum = 0, maxi = 0;
    for(int i=1; i <= 1e3+5; i++){ // TC = O(1e4)
        if(i == 1){ Dp[i] = 0;}
        else{
            for(int j=1; j*j <= i; j++){
                if((i % j) == 0){
                    int k = (i / j);
                    Dp[i] = min(Dp[i], Dp[j * (k-1)] + 1);
                    Dp[i] = min(Dp[i], Dp[k * (j-1)] + 1);
                }
            }
            // maxi = max(maxi, Dp[i]);
            // max_Sum += Dp[i];
            // cout << i << " " << Dp[i] << endl;
        }
    }
    // cout << maxi << endl;
    // cout << max_Sum << endl;
    // cout << endl << endl;
    
    int tc; cin >> tc;
    while (tc--){
        // I/P
        int n, k; cin >> n >> k;
        vector<int> b(n), c(n);
        for(int i=0; i < n; i++){ cin >> b[i];}
        for(int i=0; i < n; i++){ cin >> c[i];}

        // Solution
        vector<int> new_B(n);
        for(int i=0; i < n; i++){ new_B[i] = Dp[b[i]];}

        // Knapsack-1:
        // dp[i][j] => max. possible value if we consider only
        //        1st i-items & fill j-units of weight.
        // 
        // dp[i][j] -> dp[i-1][j-w[i]] + val[i-1]
        //          -> dp[i-1][j]
        // 
        // TC = O(N * W) = O(100 * 1e6) = O(1e8) 

        int sum = accumulate(new_B.begin(), new_B.end(), 0); // Sum of all elements in vector-'new_B'
        // SC => n * (sum of values of array)
        
        vector<int> curr(sum+5, 0), prev(sum+5, 0);

        for(int i = 1; i <= n; i++){
            for(int weight = 0; weight <= sum; weight++){
                prev[weight] = curr[weight];
                curr[weight] = 0;
            }
            for(int weight = 0; weight <= sum; weight++){
                if(weight >= new_B[i-1]){ // Take
                    curr[weight] = max(c[i-1] + prev[weight - new_B[i-1]], prev[weight]);
                }
                else{ // Not Take
                    curr[weight] = prev[weight];
                }
            }
        }

        int ans = 0;
        if(k >= sum){ ans = curr[sum];}
        else{ ans = curr[k];}

        // O/P
        cout << ans << endl;
        // TC = O(tc * (3*1e3 + (n * max(sum))))
        // TC = O(tc * (3*1e3 + (n * (1.5 * 1e4))))
        // TC = O(1e9) (X)(TLE)
        // SC = O(1e4) = O(n)
    }
}