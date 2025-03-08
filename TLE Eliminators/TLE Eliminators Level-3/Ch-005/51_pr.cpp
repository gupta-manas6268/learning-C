// 

// A. Orac and LCM
// https://codeforces.com/problemset/problem/1349/A



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

const int val = 1e5;
int SPF[val+1];
void spf(){
    for(int i=0; i <= val; i++){
        SPF[i] = i;
    }
    for(int i=2; i <= val; i++){
        if(SPF[i] == i){
            for(int j = i*i; j <= val; j += i){
                if(SPF[j] == j){
                    SPF[j] = i;
                }
            }
        }
    }
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
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    int n; cin >> n;
    vector<int> a(n);
    for(int i=0; i<n; i++){ cin >> a[i];}

    // O/P
    vector<int> primes = sieve(1e5);
    vector<map<int,int>> prime_factors;
    for(int i=0; i<n; i++){
        map<int,int> temp;
        int num = a[i];
        while(num > 1){
            temp[SPF[num]]++;
            num /= SPF[num];
        }

        prime_factors.push_back(temp);
    }

    int ans = 1;
    for(int i=0; i<n; i++){
        int smallest = prime_factors[i][];
        for(int j=0; j < primes.size(); j++){

        }
    }

    for(int j=0; j < primes.size(); j++){
        int smallest;
        int second_smallest;
        for(int i=0; i<n; i++){
            if(i == 0){
                smallest = prime_factors[i][j];
                second_smallest = smallest;
            }
            else{
                
            }
        }
    }
}