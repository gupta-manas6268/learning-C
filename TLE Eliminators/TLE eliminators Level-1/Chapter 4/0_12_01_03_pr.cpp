#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // This code is DR class code but this code shows error.

    int t; cin>>t;

    while(t--){
        int n;
        cin>>n;
        int ans = 0;
        
        for(int x=1; x*x <= n; x++){
            if(n%x == 0){
                ans++;
                if(n/x != x){
                    ans ++;
                }
        cout<<ans<<endl;
            }
        }
    }
}