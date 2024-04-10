#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, h; cin>>n>>h;
    int a[n];
    int width = 0;

    for(int i=0; i<n; i++){
        cin>>a[i];

        if(a[i] > h){
            width += 2;
        }
        else{
            width += 1;
        }
    }
    cout<<width<<endl;
}