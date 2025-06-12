// 

// Dice Combinations
// https://cses.fi/problemset/task/1633



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int Dice(int n, int num, vector<int> dp){
    if(num == n){ return 1;}
    else if(num > n){ return 0;}
    else{
        if(dp[num] != -1){
            return dp[num];
        }
        else{
            return dp[num] = Dice(n, num + 1, dp) + Dice(n, num + 2, dp) + Dice(n, num + 3, dp) + Dice(n, num + 4, dp) + Dice(n, num + 5, dp) + Dice(n, num + 6, dp);
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    vector<int> dp(n);
    for(int i=0; i<n; i++){ dp[i] = -1;}

    int ans;
    if(n <= 6){ ans = Dice(n, 0, dp);}
    else{
        for(int i=1; i <= 6; i++){
            dp[n-i] = Dice(n, i, dp);
        }

        for(int i = n-7; i >= 0; i--){
            if(dp[i] == -1){
                dp[i] = dp[i+1] + dp[i+2] + dp[i+3] + dp[i+4] + dp[i+5] + dp[i+6];
            }
        }

        ans = dp[0] % MOD;
    }
    

    // O/P
    cout << ans << endl;
}