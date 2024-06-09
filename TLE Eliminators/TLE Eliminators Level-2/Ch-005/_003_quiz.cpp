// Good Question.
// Correct.

// Strong Elements
// https://www.codechef.com/practice/course/number-theory/INTNT01/problems/STRNG?tab=statement


















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void solve(){
    int n; cin >> n;
    vector<int> v(n);  
    for(auto &it:v){ cin >> it;}
    vector<int> prefix_gcd(n,0), suffix_gcd(n,0);

    prefix_gcd[0] = v[0];
    suffix_gcd[n-1] = v[n-1];

    if(n == 1){
        cout << 1 << endl;
        return ;
    }

    for(int i=1; i<n; i++){
        prefix_gcd[i] = __gcd(prefix_gcd[i-1], v[i]);  // TC = O(n*log(n)).
    }
    for(int i = n-2; i >= 0; i--){
        suffix_gcd[i] = __gcd(suffix_gcd[i+1], v[i]);
    }

    int ans = 0;
    for(int i=0; i<n; i++){
        if(i == 0){
            if(suffix_gcd[i+1] > 1) ans++;
            continue;
        }
        if(i == n-1){
            if(prefix_gcd[i-1] > 1) ans++;
            continue;
        }
        // Excluding the i'th element what is the gcd.
        if(__gcd(prefix_gcd[i-1], suffix_gcd[i+1]) > 1) ans++;
    }
    cout << ans << endl;
    // So, TC = O(n * log(n)).
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        solve();
    }
}