// Wrong.

// B. Prime Matrix
// https://codeforces.com/contest/271/problem/B



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<int> Sieve(int n){
    bool is_primes[n+1];
    fill(is_primes, is_primes+n+1, true);

    is_primes[0] = is_primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(is_primes[i] == true){
            for(int j=i*i; j <= n; j += i){
                is_primes[j] = false;
            }
        }
    }

    vector<int> primes;
    for(int i=2; i <= n; i++){
        if(is_primes[i] == true){
            primes.push_back(i);
        }
    }

    return primes;
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    vector<int> primes = Sieve(100100);  // Here, a[i][j] <= pow(10, 5).
    
    int n, m; cin >> n >> m;
    int arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> arr[i][j];
        }
    }

    int left = 0, right = (primes.size()-1);
    while(left < right){
        int mid = (left + right)/ 2;

        if()
    }
}