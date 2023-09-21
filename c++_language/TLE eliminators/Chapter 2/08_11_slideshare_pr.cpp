#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;
    int a = 0;

    while(n > 0){
        int b = n % 10;

        if((b == 4) || (b == 7)){
            a++;
        }
        n /= 10;
    }
    
    if((a == 4) || (a == 7)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
}