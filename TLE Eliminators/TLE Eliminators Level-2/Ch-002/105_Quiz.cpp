// Correct.

// U. Knapsack 
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/U



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int helper(int i, int n, vector<pair<int, int>> &a, int W){
    if(i >= n){ return 0;}
    int notTake = helper(i+1, n, a, W);
    int take = INT_MIN;
    if(W-a[i].first >= 0)
    take = a[i].second + helper(i+1, n, a, W-a[i].first);
    return max(take, notTake);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, W; cin >> n >> W;
    vector<pair<int, int>> a(n);
    for(int i=0; i<n; i++){
        cin >> a[i].first >> a[i].second;
    }

    cout << helper(0, n, a, W) << endl;
}