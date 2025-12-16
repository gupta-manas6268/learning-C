#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int dp[((2*100000)+10)] = {-1};
int solve(int index, vector<int>& a){
    if(index == a.size()){
        return 0;
    }
    else if(index > a.size()){
        return INT_MAX;
    }

    if(dp[index] == -1){
        return dp[index] = min(solve(index+a[index]+1, a), 1 + solve(index+1, a));
    }
    if(dp[index] != -1){ return dp[index];}
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;
    int last_N = ((2*100000)+10);
    while (tc--){
        for(int i=0; i <= last_N; i++){ dp[i] = -1;}

        // I/P
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i < n; i++){ cin >> a[i];}

        last_N = n;
        // Solution
        int ans = solve(0, a);
        cout << ans << endl;
    }
}