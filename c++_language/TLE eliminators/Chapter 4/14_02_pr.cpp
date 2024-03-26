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
        int y, x;
        cin>>y>>x;

        int ans = 0;
        
        if(y<=x){
            if(x%2 != 0){
                ans += x*x;

                ans -= (y-1);
            }
            else{
                ans += (x-1)*(x-1) + 1;

                ans += (y-1);
            }
        }
        else{
            if(y%2 != 0){
                ans += y*y;

                ans -= (y-1);

                ans -= (y-x);
            }
            else{
                ans += (y-1)*(y-1) + 1;

                ans += (y-1);

                ans += (y-x);
            }
        }
        cout<<ans<<endl;
    }
}