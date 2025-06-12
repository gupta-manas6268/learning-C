#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    map<int, int> mp;
    mp[5] = 12;
    mp[1] = 123;
    mp[7] = 15;

    // map<string, int> mp;
    // mp["abc"] = 12;
    // mp["ac"] = 123;
    // mp["bad"] = 15;

    for(auto [key, value]: mp){
        cout << key << " " << value << endl;
    }
}