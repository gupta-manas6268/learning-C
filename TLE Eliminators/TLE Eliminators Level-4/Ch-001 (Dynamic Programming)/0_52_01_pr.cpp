// Wrong (Wrong O/P.)
// (My approach is Wrong.)

// Rectangle Cutting
// https://cses.fi/problemset/task/1744



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int ans = 0;
void solve(int a, int b){
    if(a == b){ return;}

    int maxi = max(a, b);
    int mini = min(a, b);
    a = maxi; b = mini;
    if(a%b == 0){
        ans += ((a/b)-1);
        return;
    }
    else{
        ans += (a/b);
        solve(a%b, b);
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int a, b; cin >> a >> b;

    // O/P
    solve(a, b);
    cout << ans << endl;
}