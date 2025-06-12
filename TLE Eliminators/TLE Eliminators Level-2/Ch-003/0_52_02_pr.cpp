// Correct.
// This is Mentor's code.

// H. Maximal AND
// https://codeforces.com/problemset/problem/1669/H



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
        int n, k; cin >> n >> k;
        int arr[n];
        for(int i=0; i<n; i++){ cin >> arr[i];}

        vector<int> count(31,0);
        int ans = 0;
        for(int i=30; i >= 0; i--){
            int temp = 0;
            for(int j=0; j<n; j++){
                if((arr[j] & (1<<i)) > 0){
                    temp++;
                }
            }
            count[i] = n-temp;
        }
        for(int i=30; i >= 0; i--){
            if(count[i] <= k){
                k -= count[i];
                ans |= (1<<i);
            }
        }

        cout << ans << endl;
    }
}