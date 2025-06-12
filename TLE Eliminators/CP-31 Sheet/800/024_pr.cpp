// Correct.

// A. We Need the Zero
// https://codeforces.com/problemset/problem/1805/A
































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
        vector<int> a;
        int ans = 0;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
            ans = (ans ^ temp);
        }

        if(n%2 == 0){
            if(ans != 0){ ans = -1;}
        }

        cout << ans << endl;
    }
}