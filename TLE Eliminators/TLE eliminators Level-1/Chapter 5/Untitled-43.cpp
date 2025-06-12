#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int n, int m){
    int ans = 1;

    for(int i=m; i>=1; i--){
        ans *= n;
    }
    return ans;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int x, k; cin>>x>>k;
        int a = 1, b = 0;

        int ans = power(2, k);
        if(x = ans){
            cout<< a << endl;
        }
        else{
            cout<< b << endl;t
        }
    }
}