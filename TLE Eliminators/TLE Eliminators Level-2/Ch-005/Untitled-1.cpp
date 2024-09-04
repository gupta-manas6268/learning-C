#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

const int num = 1e8;
bool primes[num + 1];
void sieve(){
    bool primes[num + 1];
    fill(primes, primes + num+1, true);

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= num; i++){
        if(primes[i]){
            for(int j = i*i; j <= num; j += i){
                primes[j] = false;
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

    int tc; cin >> tc;

    while (tc--){
        int n; cin >> n;

        int ans = 0;
        for(int i=1; i*i < n; i++){
            int sum = (i * i);
            int x;

            if(i%2 == 0){
                x = 1;
            }
            else{ x = 2;}

            for(int j = x; (j * j * j * j) <= (n - sum); j += 2){
                sum += (j*j*j*j);

                if(primes[sum] == true){ ans++;}
            }
        }

        cout << ans << endl;
    }
}