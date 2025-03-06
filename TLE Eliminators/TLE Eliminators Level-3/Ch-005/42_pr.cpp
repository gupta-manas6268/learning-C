// 

// A. Vasya and Petya's Game
// https://codeforces.com/problemset/problem/576/A



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int power(int base, int exp){
    int result = 1;

    while(exp > 0){
        if((exp % 2) == 1){
            (result *= base) %= MOD;

            (base *= base) %= MOD;
            exp /= 2;
        }
        else{
            (base *= base) %= MOD;
            exp /= 2;
        }
    }

    return result;
}

vector<int> sieve(int n){
    bool primes[n+1];
    fill(primes, primes+n+1, true);

    primes[0] = primes[1] = false;
    for(int i=2; i*i <= n; i++){
        if(primes[i] == true){
            for(int j = i*i; j <= n; j += i){
                primes[j] = false;
            }
        }
    }

    vector<int> ans;
    for(int i=2; i <= n; i++){
        if(primes[i] == true){
            cout << i << " ";
        }
    }

    return ans;
}

signed main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;

    // O/P
    vector<int> temp = sieve(n);
    vector<int> prime_num = temp;
    vector<int> ans = temp;
    for(int i=0; i < prime_num.size(); i++){
        // for(int j=2; power(prime_num[i], j) <= n; j++){
        int j = 2;
        while(pow(prime_num[i], j) <= n){
            ans.push_back(pow(prime_num[i], j));
            j++;
        }
    }

    cout << ans.size() << "   " << endl << endl;
    for(int i=0; i < ans.size(); i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}