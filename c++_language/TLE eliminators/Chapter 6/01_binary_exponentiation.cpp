#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int pow(int a, int b){
    int res = 1;

    while(b > 0){
        if(b%2 == 1){
            (res *= a) % MOD;
            a *= a;
            b /= 2;
        }
        return res;
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    
}