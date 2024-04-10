#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin>>n;

        if((n + 1) % 10 == 0){
            int a = (n + 1)/ 10;

            cout << a << endl;
        }
        else{
            int a = n / 10;

            cout << a << endl;
        }
    }
}