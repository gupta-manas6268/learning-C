// Correct.
// (This is Mentor's code.)

// C. Road Optimization
// https://codeforces.com/problemset/problem/1625/C



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long
#define all(x) x.begin(), x.end() 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Solution
int f(int index, int left_To_Skip, vector<int>& posi, vector<int>& speed, vector<vector<int>>& dp){
    if(index == (speed.size() - 1)){ return 0;}
    if(dp[index][left_To_Skip] != -1){ return dp[index][left_To_Skip];}

    int ans = INT_MAX;
    for(int i = (index + 1); (i < speed.size()) && (i - (index + 1)) <= left_To_Skip; i++){
        ans = min(ans, f(i, left_To_Skip - (i - (index + 1)), posi, speed, dp) + (posi[i] - posi[index]) * speed[index]);
    }

    return dp[index][left_To_Skip] = ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n, l, k; cin >> n >> l >> k;
    vector<int> posi(n+1), speed(n+1); // posi => position
    posi[n] = l;
    for(int i=0; i < n; i++){ cin >> posi[i];}
    for(int i=0; i < n; i++){ cin >> speed[i];}

    // O/P
    vector<vector<int>> dp(n, vector<int> (k+1, -1));
    cout << f(0, k, posi, speed, dp) << endl;
}