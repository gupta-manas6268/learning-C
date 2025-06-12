// Binary Exponentiation of (x^y).
// Methods are:
// 1) pow [function]. (X)

// 2) Looping (X)

// 3) Binary Exponentiation. (Advantages):
//      a) MOD
//      b) No precision Error
//      c) Fast

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int res = 1;

int power(int a, int b, int res){

    while(b > 0){
        if(b == 1){
            return res; break;
        }
        if(b%2 == 1){
            // (res *= a) %= MOD;
            (res *= a) ;
            a *= a;
            b /= 2;
        }
        else{
            a *= a;
            b /= 2;
        }
        return power(a*a, b/2, res);
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int a, b; cin >> a >> b;

    cout << power(a, b, res);
}