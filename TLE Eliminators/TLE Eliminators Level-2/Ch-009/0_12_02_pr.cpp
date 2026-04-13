// Correct.
// (This is Mentor's code.)

// (See Line-46 & Lines 67-74.)

// Subarray Sums II
// https://cses.fi/problemset/task/1661

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'

using ll = long long;

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    ll n, x; cin >> n >> x;
    ll arr[n];
    for(ll i=0; i < n; i++){ cin >> arr[i];}

    // Solution
    ll ans = 0, sum = 0;

    // Prefix_Sum + Map
    map<ll,ll> mp;
    for(ll i=0; i < n; i++){
        sum += arr[i];
        ans += mp[sum-x];
        if(sum == x){ ans++;}
        mp[sum]++;
    }

    // O/P
    cout << ans << endl;
    // TC = O(n * log(n))
}