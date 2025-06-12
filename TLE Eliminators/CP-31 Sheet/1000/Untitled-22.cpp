// This is ChatGPT code and it is working simple Test-cases.

// Check and understand this code.





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
        int a, b; cin >> a >> b;

        int ans = INF;  // Initialize ans to a large number

        for (int i = 0; i < 100; i++) {
            if (b + i == 1) continue;  // Skip if b + i == 1 as division by 1 is not allowed
            int temp = i;  // Increment operations count
            int a_copy = a;
            while (a_copy > 0) {
                a_copy /= (b + i);
                temp++;
            }
            ans = min(ans, temp);  // Keep track of the minimum operations
        }

        cout << ans << endl;
    }
}
