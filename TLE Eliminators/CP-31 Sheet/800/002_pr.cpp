// Correct.

// A. Line Trip
// https://codeforces.com/problemset/problem/1901/A






























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
        int n, x; cin >> n >> x;
        int a[n];
        for(int i=0; i<n; i++){ cin >> a[i];}

        vector<int> distance;
        for(int i=0; i<n; i++){
            if(i == 0){
                int dis = a[i];
                distance.push_back(dis);
            }
            if(i == (n-1)){
                int dis = 2 * (x - a[i]);
                distance.push_back(dis);
            }
            if(i > 0){
                int dis = (a[i] - a[i-1]);
                distance.push_back(dis);  
            }
        }

        int ans = *max_element(distance.begin(), distance.end());
        cout << ans << endl;
    }
}