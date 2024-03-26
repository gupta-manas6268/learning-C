// Q.1: https://codeforces.com/problemset/problem/1859/B

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
        int minimum[n];

        for(int i=0; i<n; i++){
            int m; cin>>m;
            int arr[m];
            minimum[i] = 60000;

            for(int j=0; j<m; j++){
                cin>>arr[j];

                minimum[i] = min(minimum[i], arr[j]);t
            }
        }
        
    }
}