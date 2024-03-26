#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // This code will not work.
    
    int x; cin>>x;

    if(x==2){
        cout<<"YES"<<endl;
    }
    for(int i=2; i<x; i++){
        if((x%i==0)){
            cout<<"NO"<<endl;
            break;
        }
        else if((x%i!=0) && (i=x-1)){
            cout<<"YES"<<endl;
        }
    }
}