#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int gcd(int a, int b){
    int primes[a+1];
    fill(primes, primes + a + 1, true);

    primes[0] = primes[1] = false;
    int ans = 1;

    for(int i=2; i<=min(a, b); i++){
        if((primes[i] == true) && (primes[i] <= a) && (primes[i] <= b)){
            if((a % primes[i] == 0) && (b % primes[i] == 0)){
                ans *= primes[i];
                a /= primes[i]; b /= primes[i];
            }
            if(min(a, b) == 1){ return ans; break;}

            for(int j=i*2; j<=a; j+=i){
                primes[j] = false;
            }
        }
    }
}
signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int a = arr[0];
        int ans;

        for(int i=0; i<n; i++){
            ans = (a * arr[i])/ gcd(a, arr[i]);

            a = ans;
        }
        cout << ans << endl;t
    }
}