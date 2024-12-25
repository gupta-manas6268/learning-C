// In Slide-1, Page-22 (WA => Wrong Answer.)
// Page-23 (B => Base, M => Modulo.) 




#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int INF = LLONG_MAX >> 1;

struct Hash{
    const int MOD = 1e9 + 7;
    const int BASE1 = 5689; // '5689' & '8861' are random prime
    const int BASE2 = 8861; //  no.'s

    vector<pair<int,int>> Hashes, Pow;

    // We are maintaining 1-based indexing, because it is better.
    Hash(string s){
        Hashes.assign(s.size() + 1, {0,0});
        Pow.assign(s.size() + 1, {1,1});

        for(int i=0; i < s.size(); i++){
            Hashes[i + 1] = {(1ll * Hashes[i].first * BASE1 + (s[i] - 'a' + 1)) % MOD,
                             (1ll * Hashes[i].second * BASE2 + (s[i] - 'a' + 1)) % MOD};
            // '1ll' in above line ensures that the multiplication operation is performed  
            // in 64-bit integer space (long long), avoiding overflow for 32-bit integers.
            Pow[i + 1] = {(1ll * Pow[i].first * BASE1) % MOD,
                          (1ll * Pow[i].second * BASE2) % MOD};
        }
    }

    // 'l' & 'r' => They are in 0-based indexing.
    pair<int,int> get(int l, int r){
        l++, r++;

        int hash1 = (Hashes[r].first - (1ll * Hashes[l-1].first * Pow[r-l+1].first) % MOD + MOD) % MOD;
        int hash2 = (Hashes[r].second - (1ll * Hashes[l-1].second * Pow[r-l+1].second) % MOD + MOD) % MOD;

        return {hash1, hash2};
    }
};

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    string s = "abcd";
    Hash a(s);

    int l, r;
    pair<int,int> hash = a.get(l, r);
}