// Correct.

// A. Everybody Likes Good Arrays!
// https://codeforces.com/problemset/problem/1777/A
































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
        int a[n];
        vector<bool> parity;
        int Parity = 0;
        for(int i=0; i<n; i++){
            cin >> a[i];

            if(a[i]%2 == 0){
                parity.push_back(false);
            }
            else{
                parity.push_back(true);
            }
        }

        vector<int> sum;
        for(int i=1; i<n; i++){
            if(Parity == 0){
                if(parity[i] == parity[i-1]){
                    Parity++;
                }
            }
            else{
                if(parity[i] == parity[i-1]){
                    Parity++;
                }
                else{
                    sum.push_back(Parity);
                    Parity = 0;
                }
            }
        }
        if(Parity != 0){
            sum.push_back(Parity);
        }

        int ans = 0;
        for(int i=0; i < sum.size(); i++){
            ans += sum[i];
        }

        cout << ans << endl;
    }
}