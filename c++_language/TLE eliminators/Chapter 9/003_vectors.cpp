#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> v = {1, 2, 3, 5, 6, 7, 8};
    v.insert(v.begin() + 3, 4);

    for(auto i: v)
        cout << i << endl;

    v.erase(v.begin() + 3);

    for(auto i: v)
        cout << i << endl;

    v.clear();

    for(auto i: v)
        cout << i << endl;

    
    // Here, TC = O(n). ( where n = 8)
}