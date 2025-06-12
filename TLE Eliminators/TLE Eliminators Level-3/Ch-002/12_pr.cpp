// Correct.

// F. Flamingoes of Mystery
// https://codeforces.com/problemset/problem/1425/F




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    // I/P
    int n; cin >> n;

    // Interactive
    vector<int> sum(n+1);
    sum[0] = 0;
    vector<int> ans(n+1);
    ans[0] = 0;
    for(int i=1; i<n; i++){
        cout << "? " << 1 << " " << (i+1) << endl;
        cin >> sum[i];

        if(i > 1){
            ans[i+1] = (sum[i] - sum[i-1]);
        }
    }
    cout << "? " << 2 << " " << 3 << endl;
    cin >> sum[n];

    ans[2] = (sum[n] - ans[3]);
    ans[1] = (sum[1] - ans[2]);
    
    // O/P
    cout << "! ";
    for(int i=1; i <= n; i++){
        cout << ans[i] << " ";
    } 
    cout << endl;
}