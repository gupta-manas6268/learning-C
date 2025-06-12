// Correct.

// B. Minimize Inversions
// https://codeforces.com/contest/1918/problem/B



















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
        int a[n], b[n];
        for(int i=0; i<n; i++){ cin >> a[i];}
        for(int i=0; i<n; i++){ cin >> b[i];}

        vector<pair<int, int>> vec;
        for(int i=0; i<n; i++){
            vec.push_back({a[i], b[i]});
        }
        sort(vec.begin(), vec.end());

        for(int i=0; i<n; i++){
            cout << vec[i].first << " ";
        }
        cout << endl;
        for(int i=0; i<n; i++){
            cout << vec[i].second << " ";
        }
        cout << endl;
    }
}