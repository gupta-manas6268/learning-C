#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

void prime(int num){
    for(int i=2; i<num; i++){
        if(num%i == 0){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // This code will work.
    int n; cin>>n;

    prime(n);
}