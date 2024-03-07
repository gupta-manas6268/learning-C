// Correct.

// A. Treasure Chest
// https://codeforces.com/problemset/problem/1895/A



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int x, y, k; cin >> x >> y >> k;

        if(x > y){
            cout << x << endl;
        }
        else{
            if(k >= (y - x)){
                cout << y << endl;
            }
            else{
                int ans = y + (y - (x + k));
                cout << ans << endl;
            }
        }
    }
}