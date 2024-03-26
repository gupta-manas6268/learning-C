#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    string s, t; cin>>s>>t;

    transform(s.begin(), s.end(), s.begin(), ::tolower);
    transform(t.begin(), t.end(), t.begin(), ::tolower);

    if(s == t)
        cout<<0<<endl;
    else if(s < t)
        cout<< -1 <<endl;
    else
        cout<< 1 <<endl;
}