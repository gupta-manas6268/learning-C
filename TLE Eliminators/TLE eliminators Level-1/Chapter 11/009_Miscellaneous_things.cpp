#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int n = 6;
int maxi = 0;

void solve(int cur=1){    // cur -→ current
    if(cur == n)
        return;

    maxi = max(maxi, cur * (n - cur));
    solve(cur+1);
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    solve();
    cout << maxi << endl;

    // Find the TC of this code Yourself?
    
}