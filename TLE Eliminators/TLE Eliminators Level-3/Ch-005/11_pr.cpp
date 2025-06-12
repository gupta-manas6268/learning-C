// Correct.

// B. Lunatic Never Content
// https://codeforces.com/contest/1826/problem/B




































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
        // I/P
        int n; cin >> n;
        vector<int> a(n);
        for(int i=0; i<n; i++){ cin >> a[i];}

        // O/P
        int ans;
        bool first = true;
        bool infinity = true;
        for(int i=0; i < (n/2); i++){
            int val = abs(a[i] - a[n-i-1]);
            if(val != 0){
                infinity = false;
                if(first == true){
                    first = false;
                    ans = val;
                }
                else{
                    ans = __gcd(ans, val);
                }
            }
        }

        if(infinity == true){
            cout << 0 << endl;
        }
        else{
            cout << ans << endl;
        }
    }
}