// Correct.
// (This is My code.)

// S. Array Average
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int index, int n, vector<int>& arr, double &ans){
    if(index == n){ return;}
    ans += (double)(arr[index]);
    solve(index + 1, n, arr, ans);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++){ cin >> arr[i];}

    // Solution
    double ans = 0.000000;
    solve(0, n, arr, ans);
    ans /= n;

    // O/P
    cout << fixed << setprecision(6) << ans << endl;
}