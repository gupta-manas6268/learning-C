// Wrong.
// (See Line-71 & 73.)

// Subarray Divisibility
// https://cses.fi/problemset/task/1662




































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
    int n; cin >> n;
    vector<int> arr(n);
    for(int i=0; i < n; i++){ cin >> arr[i];}

    // Solution
    int ans = 0, sum = 0;

    // Prefix_Sum + Map
    map<int,int> mp;
    for(int i=0; i < n; i++){
        sum += arr[i];
        ans += mp[sum%n];
        if((sum % n) == 0){ ans++;}
        mp[sum%n]++;
    }

    // O/P
    cout << ans << endl;
    // TC = O(n * log(n))
}