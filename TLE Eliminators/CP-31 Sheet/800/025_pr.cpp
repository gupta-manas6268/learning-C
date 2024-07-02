// 

// C. Prepend and Append
// https://codeforces.com/problemset/problem/1791/C



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

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        string s; 
        getline(cin, s);
        
        int ans = n;
        for(int i=0; i < n; i++){
            if((s[i] == s[n-i-1]) && (i != (n-i-1))){
                ans -= 2;
            }
            else{ break;}
        }

        cout << ans << endl;
    }
}