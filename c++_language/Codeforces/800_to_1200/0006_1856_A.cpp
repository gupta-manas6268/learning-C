// Q.6: https://codeforces.com/problemset/problem/1856/A



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
        int n; cin>>n;
        int arr[n];
        int ans = 0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=1; i<n; i++){
            if(arr[i] < arr[i-1]){
                ans = max(ans, arr[i-1]);t
            }
        }
        cout<<ans<<endl;
    }
}