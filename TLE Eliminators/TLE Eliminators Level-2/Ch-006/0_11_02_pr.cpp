// This is Mentor's code.

// Correct.

// M. Minimum LCM
// https://codeforces.com/contest/1765/problem/M



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

long long LCM(long long a, long long b){
    long long ans = (a * b)/ __gcd(a, b);
    return ans;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        long long n; cin >> n;
        long long a1 = 1, b1 = n-1;
        long long ans = LCM(a1, b1);

        for(long long i=2; i*i <= n; i++){  
        // for loop => To get prime factors of n. 
            if(n%i == 0){
                long long temp = LCM(i, n-i);

                if(temp < ans){
                    ans = temp;
                    a1 = i; b1 = n-i;
                }

                if(n/i != i){  // To get factors > sqrt(n).
                // As, for loop goes to sqrt(n) only.
                    temp = LCM(n/i, n-n/i);
                    if(temp < ans){
                        ans = temp;
                        a1 = n/i, b1 = n-n/i;
                    }
                }
            }
        }

        cout << a1 << " " << b1 << endl;

        // TC = O(sqrt(n) * log(n)). (of code.)

        //  log(n) => TC of gcd function.
    }
}