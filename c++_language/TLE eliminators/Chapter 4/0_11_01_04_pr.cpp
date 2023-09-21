#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // an approach similar to map.
    // instead of a map



    int n; cin>>n;

    vector<int>v(n),visi(n+1);
    for(int i=0; i<n-1; i++){cin>>v[i]; visi[v[i]]++;} // visi-→visited a number or not.

    for(int i=1; i<=n; i++){if(!visi[i]){cout<<i<<endl; break;}}
}