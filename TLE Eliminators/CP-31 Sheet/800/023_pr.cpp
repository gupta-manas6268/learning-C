// 

// A. Walking Master
// https://codeforces.com/problemset/problem/1806/A



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

    int tc; cin >> tc;

    while (tc--){
        int a, b, c, d; cin >> a >> b >> c >> d;

        int ans = 0;
        if(d < b){
            ans = -1;
        }
        else{
            ans += (d - b);
            b = d;
            a += (d - b);
            cout << ans << endl;

            if(a >= c){
                cout << ans << endl;
                ans += (a - c);
                cout << ans << endl;
            }
            else{ ans = -1;}
        }

        cout << ans << endl;
        cout << endl;
    }
}