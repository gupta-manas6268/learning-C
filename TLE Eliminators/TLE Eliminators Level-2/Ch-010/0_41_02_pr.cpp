// This is Mentor's code.
// Correct.

// A. Points on Line
// https://codeforces.com/problemset/problem/251/A































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

    int n, d; cin >> n >> d;
    vector<int> x;
    for(int i=0; i<n; i++){
        int temp; cin >> temp;
        x.push_back(temp);
    }

    // Iterating over the Rightmost point.
    long long ans = 0;
    for(int i=2; i < n; i++){
        int index = lower_bound(x.begin(), x.end(), x[i]-d) - x.begin();
        long long temp = (i - index);
        if(temp >= 2){
            // ans += temp_C_2;
            ans += (temp * (temp - 1)) / 2;
        }
    }

    cout << ans << endl;

    // TC = O(n*log(n)).
}