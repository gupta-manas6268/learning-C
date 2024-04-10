#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int a, int b){
    int ans = 1;
    while(b--){
        ans *= a;
    }
    return ans;
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    // b = a*q + r(0 <= r < a) // Here,'b = divisor', 'a = dividend', 'q = quotient', 'r = remainder'.

    // (a + b)% M = ((a % M) + (b % M))% M. 
    // (a - b)% M = ((a % M) + (b % M) + M)% M. 
    // (a * b)% M = ((a % M) * (b % M))% M. 

    // Here, S(n) mod((10 ^ 9) + 7)  is
    // S(n) % ((10 ^ 9) + 7) = ans.

    // As, (10 ^ 32)% ((10 ^ 9) + 7) = ((10 ^ 9) + 6).

    int tc; cin >> tc;

    while (tc--){
        int n; cin>>n;
        int ans = ((n % (power(10, 9) + 7)) * (n % (power(10, 9) + 7))) % (power(10, 9) + 7);
        
        cout<<ans<<endl;
    }
}