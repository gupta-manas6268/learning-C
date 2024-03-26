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

    x = ceil((double)n / a); // ceil is G.I.F function i.e. Greatest Integer Function.
    y = ceil((double)m / a);

    cout<<x*y<<endl;

}