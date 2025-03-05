// 

// E - Double Factorial 
// https://atcoder.jp/contests/abc148/tasks/abc148_e



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    long long n; cin >> n;

    // O/P
    long long ans = 0;
    if(n%2 == 0){ // even
        for(int i=1; i <= 18; i++){
            // cout << power(10,i) << " ";
            ans += (n / power(10,i));
        }
    }

    cout << ans << endl;
}