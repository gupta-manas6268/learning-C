// 

// Y. Number of Ways
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/Y


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int start_Point, end_Point;

int rec(int currentPoint){
    if(currentPoint < start_Point){
        return 0;
    }
    if(currentPoint == start_Point){
        return 1;
    }
    return rec(currentPoint-1) + rec(currentPoint-2) + rec(currentPoint-3);
}

void solve(){
    cin >> start_Point >> end_Point;
    cout << rec(end_Point) << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        solve();
    }
}

