#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n;
    long long  ans=0;    
    long long last=0;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        if(x>=last){last=x; continue;}t // This code is showing error.
        else{ans+=(last-x);}
    }    
    cout<<ans<<endl;
}