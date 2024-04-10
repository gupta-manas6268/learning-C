#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    map<int, int> mp;
    mp[1] = 5;
    mp[2] = 3;

    // cout << (*mp.begin()).first << endl;
    cout << mp.begin()->first << endl;
    cout << mp.begin()->second << endl;

    // cout << (++mp.begin() + second) << endl; // By uncommenting this line, The code will show error.

    cout << (++mp.begin())->second << endl;

}