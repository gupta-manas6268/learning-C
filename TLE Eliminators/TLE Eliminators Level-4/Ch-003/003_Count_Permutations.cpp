#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n = 6;

    // Here, we just find No. of ways to put elements.
    vector<vector<int>> dp(n, vector<int>((1 << n), -1));

    auto f = [&](int index, int mask, auto &&F) -> int {
        if(index == n){ return 1;}
        if(dp[index][mask] != -1){ return dp[index][mask];}

        int ways = 0;
        for(int i=0; i < n; i++){
            if(((1 << i) & mask) == 0){
                ways += F(index + 1, mask | (1 << i), F);
            }
        }

        return dp[index][mask] = ways;
    };

    cout << f(0, 0, f) << endl;
    // TC = O(n * pow(2, n))
}