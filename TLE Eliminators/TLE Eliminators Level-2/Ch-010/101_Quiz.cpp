// Correct.

// E. Building an Aquarium
// https://codeforces.com/contest/1873/problem/E





































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool func(long long mid, vector<long long> &v, long long x){
    long long units = 0;
    for(auto it:v){
        // units += max(0, mid-it); // This line will give me error.
        units += max(0LL, mid-it);
    }
    return units <= x;
}

void solve(){
    long long n, x; cin >> n >> x;
    vector<long long> v(n);
    for(auto &it:v){ cin >> it;}

    long long start_index = 1;
    long long end_index = 1e12;
    long long ans = -1;

    while(start_index <= end_index){
        long long mid = start_index + (end_index - start_index)/2;
        if(func(mid, v, x)){
            ans = mid;
            start_index = mid+1;
        }
        else{
            end_index = mid-1;
        }
    }

    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        solve();
    }
}