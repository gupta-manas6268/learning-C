#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

signed main(){
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, k; cin >> n >> k;

    vector<int> prime; // "prime"
    int size = 0, ans = 0;

    bool mainAns = false;

    for(int i=2; i<=n; i++){
        bool primes[n + 1];
        fill(primes, primes+n+1, true); // "primes"

        primes[0] = primes[1] = false;
        for(int j=2; j*j <= i; j++){
            if(primes[i] == true){
                prime.push_back(i); size++;

                for(int k=j*j; k<=i; k += j){
                    primes[k] = false;
                }

                if(size > 2){
                    for(int l=1; l<size; l++){
                        if(prime[l] + prime[l-1] == i){
                            ans++;
                        }
                    }
                }
            }
        }
        if(ans>=k){
            mainAns = true;
            break;
        }
    }
    if(mainAns == true){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;t
    }
}