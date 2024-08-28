// Wrong.

// Solve it yourself, because Mentor didn't discuss
//  this code.

// C - World Tour Finals
// https://atcoder.jp/contests/abc323/tasks/abc323_c














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

    int n, m; cin >> n >> m;
    vector<int> a;
    for(int i=0; i<m; i++){
        int temp; cin >> temp;
        a.push_back(temp);
    }
    vector<string> str;
    for(int i=0; i<n; i++){
        string temp; cin >> temp;
        str.push_back(temp);
    }
}