// Correct.
// This is Mentor's code.

// I know it's Concept, but my Code is Wrong.
//  So, don't Write Concept, but think about 
//  whether to Write code or not.

// E. Monotonic Renumeration
// https://codeforces.com/problemset/problem/1102/E































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 998244353;
const int INF = LLONG_MAX >> 1;

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> arr(n);
    for(auto &i:arr){ cin >> i;}

    // Solution
    map<int,int> mp;
    for(int i=0; i<n; i++){
        mp[arr[i]] = i;
    }

    int ans = 1, index = 0;
    for(int i=0; i < n-1; i++){
        index = max(index, mp[arr[i]]);
        if(i == index){
            ans *= 2;
            ans %= MOD;
        }
    }

    // O/P
    cout << ans << endl;
}