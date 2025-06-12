#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n; cin>>n;

    int fibonacci[n+1];
    fibonacci[1] =0;
    fibonacci[2] =1;

    for(int i=3; i<=n; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    cout<<fibonacci[n]<<endl;

}