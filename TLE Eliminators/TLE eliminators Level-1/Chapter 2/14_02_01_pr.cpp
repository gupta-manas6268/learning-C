#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int y; cin>>y;

    while(y++){
        int a, b, c, d;
        a = y%10, b = (y/10)%10, c = (y/100)%10, d = (y/1000);


        if(a!=b && b!=c && c!=d && d!=a && a!=c && b!=d){
            cout<<y<<endl;
            break;
        }
    }
}