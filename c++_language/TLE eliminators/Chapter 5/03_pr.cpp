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
        int P; cin >> P;

        int a = 2, b;

        if(P % 2 == 0){ b = P;}
        else{ b = P - 1;}

        cout << a << " " << b << endl;
    }
}