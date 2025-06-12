// Correct.

// C. Ski Resort
// https://codeforces.com/problemset/problem/1840/C




























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
        int n, k, q; cin >> n >> k >> q;
        int a[n];
        for(int i=0; i<n; i++){ cin >> a[i];}

        vector<int> consecutive;
        int Consecutive = 0;
        for(int i=0; i<n; i++){
            if(a[i] <= q){
                Consecutive++;
            }
            else if(Consecutive != 0){
                consecutive.push_back(Consecutive);
                Consecutive = 0;
            }
        }
        if(Consecutive != 0){
            consecutive.push_back(Consecutive);
            Consecutive = 0;
        }

        int ans = 0;
        for(int i=0; i < consecutive.size(); i++){
            if(consecutive[i] >= k){
                int num = (consecutive[i] - k + 1);
                int sum = ((num * (num + 1))/ 2);

                ans += (sum);
            }
        }

        cout << ans << endl;
    }
}