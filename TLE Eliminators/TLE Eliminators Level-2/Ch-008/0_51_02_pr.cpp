// This is Mentor's code.
// Correct.

// D - Five, Five Everywhere
// https://atcoder.jp/contests/abc096/tasks/abc096_d



















#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

vector<long long> primes;
vector<bool> is_prime;

void Sieve(int n){
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for(long long i = 2; i*i <= n; i++){
        if(is_prime[i]){
            for(long long j = i*i; j <= n; j += i){
                is_prime[j] = false;
            }
        }
    }
}

void get_primes(int n){
    for(int i=2; i <= n; i++){
        if(is_prime[i]){
            primes.push_back(i);
        }
    }
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    Sieve(55556);
    get_primes(55556);

    int n; cin >> n;

    int c = 0;
    for(auto it:primes){
        if(c == n){ break;}
        if(it%5 == 1){
            cout << it << " ", c++;
        }
        cout << endl;
    }
}