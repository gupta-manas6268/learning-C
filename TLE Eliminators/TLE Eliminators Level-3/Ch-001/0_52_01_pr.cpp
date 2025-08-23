// Correct.
// (This is My code in 2nd Revision time.)

// C. Cellular Network
// https://codeforces.com/problemset/problem/702/C



































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

    // I/P
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int i=0; i < n; i++){ cin >> a[i];}
    for(int i=0; i < m; i++){ cin >> b[i];}
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    // Solution
    int ans = 0;
    for(int i=0; i < n; i++){
        int index = lower_bound(b.begin(), b.end(), a[i]) - b.begin();
        int temp = -1;
        if((index >= 0) && (index < m)){
            if(index == 0){
                temp = abs(a[i]-b[index]);
            }
            else{
                temp = min(abs(a[i]-b[index]), abs(a[i]-b[index-1]));
            }
        }
        else{
            temp = abs(a[i]-b[index-1]);
        }
        ans = max(ans, temp);
    }

    // O/P
    cout << ans << endl;
    // TC = O(n * log(n))
}