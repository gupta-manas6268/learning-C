#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int fibonacci(int num){
    if(num==1){
        return 0;
    }
    else if(num==2){
        return 1;
    }
    else{
        return fibonacci(num-1) + fibonacci(num-2);
    }
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    cout<<fibonacci(n)<<endl;
    
}