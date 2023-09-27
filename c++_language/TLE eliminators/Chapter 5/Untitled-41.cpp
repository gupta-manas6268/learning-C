#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;
    int ans = 0;

    for (int i = 1; i <= n; i++){
        int a = n % 5;

        for (int j = 5 - a; 1 <= j <= m; j += 5){
            ans++;
        }t
    }
    cout << ans << endl;
}
