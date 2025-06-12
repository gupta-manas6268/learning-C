// This is Mentor's code.
// Correct.

// Digit Queries
// https://cses.fi/problemset/task/2431/


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(int k){
    long long count = 1;
    long long x = 9;

    while(k > count*x){  // count*x, tells me that how many places are occupied.
        k -= count*x;
        count++;
        x *= 10;
    }

    long long start = pow(10, count-1);
    start += (k / count);
    k -= (k / count) * count;
    if(k == 0){
        start--;
        string s = to_string(start);
        cout << s[count-1] << endl;
        return ;
    }
    string s = to_string(start);
    cout << s[k-1] << endl;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long k; cin >> k;
        solve(k);
    }
}