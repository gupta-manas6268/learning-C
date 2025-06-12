#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // cout << bitset<size>(n) << endl;   // Here, size = no. of digits binary, n = no. in Decimal.

    cout << bitset<10>(134) << endl;
    cout << bitset<123>(134) << endl;
    cout << endl << endl;

    cout << 1 << 3 + 1 << endl;
    cout << (1 << 3 + 1) << endl;
    cout << ((1 << 3) + 1) << endl;
    cout << endl;

    cout << (3 & (2 + 2)) << endl;
    cout << ((3 & 2) + 2) << endl;

}