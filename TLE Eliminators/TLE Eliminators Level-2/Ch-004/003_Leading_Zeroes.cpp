#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void clz(){
    int a = 100025897869;
    int ans_1 = __builtin_clz(a);
    // '__builtin_clzll'  => It counts leading zeroes
    //                        by taking in 32-bit integer.
    int ans_2 = __builtin_clzll(a);
    // '__builtin_clzll'  => It counts leading zeroes
    //                        by taking in 64-bit integer.

    int b = 16;
    int ans_3 = __builtin_clz(b);
    int ans_4 = __builtin_clzll(b);

    cout << ans_1 << " " << ans_2 << endl;
    cout << ans_3 << " " << ans_4 << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    clz();
}