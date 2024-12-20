// 
 
// Multiplication Table
// https://cses.fi/problemset/task/2422
 
 
 
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
 
    int n; cin >> n;
    
    vector<int> a(n*n, 0);
    a.reserve(n*n);
    int k = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            int temp = (i * j);
            a[k] = temp;
            k++;
            // a.push_back(temp);
        }
    }
    sort(a.begin(), a.end());
 
    int ans = a[((n*n)-1)/ 2];
    cout << ans << endl;
}