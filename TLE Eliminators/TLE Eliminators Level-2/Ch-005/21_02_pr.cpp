// 

// HS08PAUL - A conjecture of Paul Erdős
// https://www.spoj.com/problems/HS08PAUL/



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int res = 1;

    while(exp > 0){
        if(exp % 2 == 1){
            res *= base;

            base *= base;
            exp /= 2;
        }
        else{
            base *= base;
            exp /= 2;
        }
    }

    return res;
}

vector<bool> sieve(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i] == true){
            for(int j=i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    vector<bool> ans;
    for(int i=0; i<=n; i++){
        ans.push_back(primes[i]);
    }

    return ans;
}

signed main(){
    // ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    vector<bool> primes = sieve(power(10,7));

    while (tc--){
        int n; cin >> n;

        int ans = 0;
        for(int i=2; i <= n; i++){
            if(primes[i] == true){
                for(int y=1; power(y,4) <= i; y++){
                    int square_x = (i - power(y,4));
                    int x = sqrt(square_x);
                    if(x*x == square_x){
                        ans++;
                        break;
                    }
                }
            }
        }

        cout << ans << endl;
    }
}