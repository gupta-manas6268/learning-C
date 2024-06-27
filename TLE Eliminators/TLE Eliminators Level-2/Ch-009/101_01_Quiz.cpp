// Wrong.

// D - Snuke Prime
// https://atcoder.jp/contests/abc188/tasks/abc188_d




























#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int N=1e6;
int difference_Array[N];
void solve(){
    int n, x; cin >> n >> x;
    int a[n], b[n], c[n];
    for(int i=0; i<n; i++){
        cin >> a[i] >> b[i] >> c[i];
    }

    for(int i=0; i<n; i++){
        difference_Array[a[i]] += c[i];
        if(b[i]+1 < 1e6){
            difference_Array[b[i]+1] -= c[i];
        }
    }
    for(int i=1; i<N; i++){
        difference_Array[i] += difference_Array[i-1];
    }

    long long ans = 0;
    for(int i=0; i<N; i++){
        ans += min(x, difference_Array[i]);
    }
    cout << ans << endl;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
}