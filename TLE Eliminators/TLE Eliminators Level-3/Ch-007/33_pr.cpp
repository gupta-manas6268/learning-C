// 

// E. Replace With the Previous, Minimize
// https://codeforces.com/problemset/problem/1675/E



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
        int n, k; cin >> n >> k;
        string s; cin >> s;

        // Solution
        string ans[n];
        int val[n];
        if(k >= 25){
            for(int i=0; i<n; i++){ ans[i] = 'a';}
        }
        else{
            int maxi_1 = 0;
            int maxi_2 = 0;
            int go_2 = 0;

            for(int i=0; i<n; i++){
                val[i] = (int)(s[i] - 'a');

                if(val[i] > k){
                    maxi_2 = val[i];
                    go_2 = (val[i] - (k - maxi_1));
                    break;
                }
                else{
                    maxi_1 = max(maxi_1, val[i]);
                }
            }
            for(int i=0; i<n; i++){
                if(val[i] <= maxi_1){
                    val[i] = 0;
                }
                else if((val[i] >= go_2) && (val[i] <= maxi_2)){
                    val[i] = go_2;
                }

                ans[i] = char('a' + val[i]);
            }
        }

        // O/P
        // for(int i=0; i<n; i++){ cout << val[i] << " ";}
        cout << ans << endl;
    }
}