#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int pow (int base, int exp){
    int res = 1;

    while(exp > 0){
        if(exp % 2 == 1){
            // (res *= base) %= MOD;
            (res *= base) ;

            (base *= base) ;
            exp /= 2;
        }
        else{
            // (base *= base) %= MOD;
            (base *= base) ;
            exp /= 2;
        }
    }

    return res;
}

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a, b; cin >> a >> b;

    cout << pow(a, b);
}