// Here, using official 'sqrt' function makes 
//  TC less.

// Correct.

// B. T-primes
// https://codeforces.com/problemset/problem/230/B
















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool is_prime(int n){
    for(int i=2; i*i <= n; i++){
        if(n%i == 0){
            return false;
        }
    }

    if(n > 1){
        return true;
    }
    else{
        return false;
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
        int Sqrt = sqrt(n);
        bool ans = false;
        if(n != (Sqrt * Sqrt)){
            cout << "NO" << endl;
        }
        else{
            if(is_prime(Sqrt) == true){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}