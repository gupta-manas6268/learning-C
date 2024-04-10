#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int k; cin>>k;

    int a = k/60;
    int b = k%60;

    if(b>=10){
        cout<<21+a<<":"<<b<<endl;
    }
    else{
        cout<<21+a<<":0"<<b<<endl;
    }
    
}