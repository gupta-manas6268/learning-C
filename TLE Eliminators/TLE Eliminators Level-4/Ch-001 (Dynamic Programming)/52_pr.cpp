// 

// Rectangle Cutting
// https://cses.fi/problemset/task/1744



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
    int a, b; cin >> a >> b;

    // Solution
    int moves = 0;
    while(a != b){
        int Maxi = max(a, b);
        int Mini = min(a, b);

        a = Maxi, b = Mini;
        a -= b;
        moves++;
    }

    // O/P
    cout << moves << endl;
}