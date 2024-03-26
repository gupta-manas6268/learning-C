#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;
        vector<int> prime;
        int size = 0;

        int primes[n+1];
        fill(primes, primes + n+1, true);

        primes[0] = primes[1] = false;

        for(int i=2; i<=n; i++){  
            if(primes[i]){  // If 'i' is has been marked for prime  i.e. "primes[i] = true".
                for(int j=i*i; j<=n; j+=i) // Changed.
                    primes[j] = false;

                prime.push_back(i);
                size++;
            }
        }
        int ans = 0;
        bool Ans = true;

        for(int i=5; i < size; i++){
            for(int j=2; j<i; j++){

                int lhs = prime[j] + prime[j + 1] + 1;
                int rhs = prime[i];

                if(lhs == rhs){
                    ans++;
                    break;
                }
            }
            if(ans >= k){
                Ans = false;
                break;
            }
        }
    if(Ans == false){ cout << "YES" << endl;}
    else{ cout << "NO" << endl;}t
}