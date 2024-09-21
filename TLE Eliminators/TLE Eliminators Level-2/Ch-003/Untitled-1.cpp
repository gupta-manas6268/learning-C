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
        int n; cin >> n;

        int a = 1, b = 2;
        int c = 3;
        int d = (c ^ n);
        while((a == c) || (a == d) || (b == c) || (b == d) || (c == d)){
            c++;
            d = (c ^ n);
        }
        cout << a << " " << b << " " << c << " " << d << endl;
    }
}