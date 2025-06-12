// Wrong.

// String Matching
// https://cses.fi/problemset/task/1753/




































#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

struct Hash{
    const int MOD = 1e9 + 7;
    const int BASE1 = 5689; // '5689' & '8861' are random prime
    const int BASE2 = 8861; //  no.'s

    vector<pair<int,int>> Hashes, Pow;

    int mul(int a, int b, int mod){
        return (int)((1ll * a * b) % mod);
    }

    // We are maintaining 1-based indexing, because it is better.
    Hash(string s){
        Hashes.assign(s.size() + 1, {0,0});
        Pow.assign(s.size() + 1, {1,1});

        for(int i=0; i < s.size(); i++){
            Hashes[i + 1] = {(1ll * Hashes[i].first + mul((s[i] - 'a' + 1), Pow[i].first, MOD) + MOD) % MOD,
                (1ll * Hashes[i].second + mul((s[i] - 'a' + 1), Pow[i].second, MOD) + MOD) % MOD};
            // '1ll' in above line ensures that the multiplication operation is performed  
            // in 64-bit integer space (long long), avoiding overflow for 32-bit integers.
            Pow[i + 1] = {(1ll * Pow[i].first * BASE1) % MOD,
                          (1ll * Pow[i].second * BASE2) % MOD};
        }
    }

    // 'l' & 'r' => They are in 1-based indexing.
    pair<int,int> get(int l, int r){

        int hash1 = ((Hashes[r].first - Hashes[l-1].first)/ Pow[l].first) % MOD;
        int hash2 = ((Hashes[r].second - Hashes[l-1].second)/ Pow[l].second) % MOD;

        return {hash1, hash2};
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
    struct Hash h1 = Hash(s);
    struct Hash h2 = Hash(t);
    int n = s.length(), m = t.length();
    pair<int,int> B = h2.get(1, m);
    int ans = 0;
    for(int i = 0; i + m <= n; i++){
        if((h1.get(i + 1, i + m).first == B.first) && (h1.get(i + 1, i + m).second == B.second)){ // shift +1 because `Hash` uses 1-based indexing
            ans++;
        }
    }

    // O/P
    cout << ans << endl;
}