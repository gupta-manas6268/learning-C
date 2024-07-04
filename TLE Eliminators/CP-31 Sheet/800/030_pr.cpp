// 

// A. Extremely Round
// https://codeforces.com/problemset/problem/1766/A



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

        int ans = 0;
        for(int i=1; i<=n; i++){
            int num = i;
            int digit = 0;
            while(num > 0){
                if((num%10) != 0){
                    digit++;
                }
                num /= 10;
            }
            if(digit == 1){ ans++;}            
        }

        cout << ans << endl;
    }
}