#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, m, a; cin>>n>>m>>a;

    int x, y;

    if(n%a==0){
        x=n/a;
    }
    if(n%a!=0){
        x = n/a + 1;
    }
    if(m%a==0){
        y=m/a;
    }
    if(m%a!=0){
        y = m/a + 1;
    }
    cout<<x*y<<endl;

}