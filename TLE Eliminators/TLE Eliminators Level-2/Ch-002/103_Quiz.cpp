// Correct.

// S. Array Average
// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/S


































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

double helper(int i, double s, int n, vector<int> &a){
    if(i == n){ return (s*1.0/ n*1.0);}
    return helper(i+1, s+a[i], n, a);
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){ cin >> a[i];}

    cout << setprecision(7) << fixed << helper(0, 0.0, n, a) << endl;
    // ( setprecision(7) << fixex ) => gives decimal part upto 7-digits.
    // here, 7 = 6+1, for safe side of Answer.
}