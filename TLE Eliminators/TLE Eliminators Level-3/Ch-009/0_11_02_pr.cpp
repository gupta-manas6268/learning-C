// Wrong (Full code not written.)
// This is Mentor's code.

// String Matching
// https://cses.fi/problemset/task/1753/



































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

int 
struct Hash{
    string s; 
    int n;
    int primes;
    vector<int> hash_Primes = {1000000009, 1000000007};
    const int base = 31;
    vector<vector<int>> hash_Values;
    vector<vector<int>> Powers_of_Base;
    vector<vector<int>> Inverse_Powers_of_Base;

    Hash(string a){
        primes = sz(hash_Primes);
        hash_Values.resize(primes);
        Powers_of_Base.resize(primes);
        Inverse_Powers_of_Base.resize(primes);

        s = a;
        n = s.length();
        for(int i=0; i < sz(hash_Primes); i++){
            Powers_of_Base[i].resize(n + 1);
            Inverse_Powers_of_Base[i].resize(n + 1);
            Powers_of_Base[i][0] = 1;

            for(int j=1; j <= n; j++){
                Powers_of_Base[i][j] = (base * Powers_of_Base[i][j-1]) % hash_Primes[i];
            }
            Inverse_Powers_of_Base[i][n] = mminvprime(Powers_of_Base[i][n], hash_Primes[i]);
            for(int j = n-1; j >= 0; j--){
                Inverse_Powers_of_Base[i][j] = mod_mul(Inverse_Powers_of_Base[i][j + 1], base, hash_Primes);
            }
        }
        for(int i=0; i < sz(hash_Primes); i++){
            hash_Values[i].resize(n);
            for(int j=0; j < n; j++){
                hash_Values[i][j] = ((s[j]-'a'+1LL) * Powers_of_Base[i][j]) % hash_Primes[i];
                hash_Values[i][j] = (hash_Values[i][j] + (j > 0 ? hash_Values[i][j - 1] : 0LL)) % hash_Primes[i];
            }
        }
    }   
    vector<int> get(int l, int r){
        vector<int> hash(primes);
        for(int i=0; i < primes; i++){
            int val_1 = 
        }
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    // I/P
    string s, t; cin >> s >> t;

    // Solution
    

    // O/P
    // cout << ans << endl;
}