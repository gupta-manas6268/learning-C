// Wrong (TLE)

// C. Kuroni and Impossible Calculation
// https://codeforces.com/problemset/problem/1305/C



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int mod(int a){
    if(a > 0){ return a;}
    else{
        return -a;
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m; cin >> n >> m;
    int a[n];
    for(int i=0; i<n; i++){ cin >> a[i];}

    int ans = 1;
    for(int i=0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(mod(a[i]-a[j]) == 0){
                ans = 0; break;
            }
            ans = ((ans % m) * (mod(a[i]-a[j]) % m) % m);
        }
    }
    // TC = O(pow(n, 2)).

    cout << ans << endl;
}