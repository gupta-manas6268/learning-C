// From here(From this problem.)


#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int a, b, c; cin>>a>>b>>c;

        int ans = max(a, max(b, c));
        cout<<ans<<endl;
    }
}