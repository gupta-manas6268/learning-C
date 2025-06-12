// 

// Subarray Sums II
// https://cses.fi/problemset/task/1661



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

    int n, x; cin >> n >> x;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    int ans = 0;

    int prefix_Sum[n];
    prefix_Sum[0] = a[0];
    if(prefix_Sum[0] == x){ ans++;}

    for(int i=1; i<n; i++){
        prefix_Sum[i] = (a[i] + prefix_Sum[i-1]);

        if(prefix_Sum[i] == x){ ans++;}
    }

    for(int i=0; i < (n-1); i++){
        for(int j = i+1; j<n; j++){
            int temp = (prefix_Sum[j] - prefix_Sum[i]);
            if(temp == x){ ans++;}
        }
    }

    cout << ans << endl;
}