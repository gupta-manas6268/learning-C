#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin >> n;
    vector<long long> arr(n);
    for(auto &it:arr){ cin >> it;}

    int temp = arr[0];
    for(int i=1; i<n; i++){
        temp = (temp * arr[i])/ __gcd(temp, arr[i]);
    }
    cout << temp << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}