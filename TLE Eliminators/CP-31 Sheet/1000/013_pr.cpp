// Correct.

// B. Luke is a Foodie
// https://codeforces.com/problemset/problem/1704/B
































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
        vector<int> a;
        for(int i=0; i<n; i++){
            int temp; cin >> temp;
            a.push_back(temp);
        }

        int changes = 0;
        int mini = a[0], maxi = a[0];
        for(int i=1; i<n; i++){
            mini = min(mini, a[i]);
            maxi = max(maxi, a[i]);
            if(abs(maxi-mini) > (2 * x)){
                changes++;
                maxi = a[i];
                mini = a[i];
            }
        }

        cout << changes << endl;
    }
}