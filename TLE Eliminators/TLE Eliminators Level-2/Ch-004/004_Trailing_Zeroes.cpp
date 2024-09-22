#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void ctz(){
    int a = 16;
    cout << __builtin_ctz(a) << endl;
    cout << __builtin_ctzll(a) << endl;
    // __builtin_ctz(a) => Counts trailing zeroes of 
    //                      no. 'a'.
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    ctz();
}