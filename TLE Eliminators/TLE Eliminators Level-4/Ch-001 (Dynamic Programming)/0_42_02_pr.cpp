// Correct.
// (This is My code. So, whenever you see SC can be
//  optimised from SC = O(n) to SC = O(1). You, will
//  optimise SC & TC as, sometimes it can give MLE.)

// E. Tetrahedron
// https://codeforces.com/problemset/problem/166/E

































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // Solution
    vector<int> Current(4, 0);
    vector<int> Last(4, 0);
    Last[0] = 0, Last[1] = 1, Last[2] = 1, Last[3] = 1;
    Current[0] = 0, Current[1] = 1, Current[2] = 1, Current[3] = 1;
    for(int i=2; i <= n; i++){
        Last[0] = Current[0], Last[1] = Current[1];
        Last[2] = Current[2], Last[3] = Current[3];

        Current[0] = (Last[1] + Last[2] + Last[3]);
        Current[0] %= MOD;
        Current[1] = (Last[0] + Last[2] + Last[3]);
        Current[1] %= MOD;
        Current[2] = (Last[0] + Last[1] + Last[3]);
        Current[2] %= MOD;
        Current[3] = (Last[0] + Last[1] + Last[2]);
        Current[3] %= MOD;
    }

    // O/P
    int ans = 0;
    if(n == 1){ ans = 0;}
    else{ ans = Current[0];}
    cout << ans << endl;
    // TC = O(n)
    // SC = O(1)
}