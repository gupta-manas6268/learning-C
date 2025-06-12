#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin >> n;
    int x; cin >> x;
    vector<int> v(n);
    for(auto &it:v){ cin >> it;}

    sort(v.begin(), v.end());
    
    int index = lower_bound(v.begin(), v.end(), x) - v.begin();
    if(index != n){
        cout << index << endl;
        cout << v[index] << endl;
    }
    else{
        cout << "No such value exists." << endl;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}