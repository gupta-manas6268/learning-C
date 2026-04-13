// Wrong.
// (This is my version of Mentor' code. (Complete this code.))

// HS08PAUL - A conjecture of Paul Erdős
// https://www.spoj.com/problems/HS08PAUL/



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int n = 10000007;   // N = pow(10,7).
bool sieve[n];
int ans[n];

void Sieve(){
    memset(sieve, 0, sizeof(sieve));  
    // fill all values in sieve with false.
    for(int i=2; i<n; i++){
        if(!sieve[i]){
            for(int j = 2*i; j < n; j += i){
                sieve[j] = 1;
            }
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    
    ios::sync_with_stdio(false); cin.tie(NULL);

    memset(ans, 0, sizeof(ans));
    for(int x=1; x <= 5000; x++){
        for(int y=1; y <= 90; y++){
            int result = x*x + y*y*y*y;

            if(result >= n){ break;}

            if(!sieve[result]){  // result is prime.
                ans[result] = 1;
            }
        }
    }

    // prefix sum
    for(int i=1; i<n; i++){
        ans[i] = (ans[i] + ans[i-1]);
    }

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;
        cout << ans[n] << endl;
    }
}