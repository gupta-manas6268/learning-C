#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    int MOD = 1e9 + 7;
    while(t--){
        int n; cin>>n;
        int ans = ((n % MOD) * (n % MOD)) % MOD;

        cout<<ans<<endl;
    }
    return 0;
}