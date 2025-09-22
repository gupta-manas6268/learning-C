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
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int i=0; i < n; i++){ cin >> a[i];}

    // Solution
    int ans = n;
    int i=0, j=1;
    deque<pair<int,int>> mini, maxi;
    while((i < j) && (j < n)){
        
    }
}