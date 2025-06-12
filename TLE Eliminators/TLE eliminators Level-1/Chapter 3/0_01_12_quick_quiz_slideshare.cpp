#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n, l, r; cin >> n >> l >> r;

        int arr[n];
        for(int i=0; i<n; i++){ cin >> arr[i];}

        int ans = 0;

        for(int i=0; i < n-1; i++){
            for(int j = i+1; j<n; j++){
                int check = arr[i] + arr[j];

                if((check >= l) && (check <= r)){
                    ans++;
                }
            }
        }

        cout << ans << endl;
    }
}