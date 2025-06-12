// This is Part-02 of this Lecture.

// 

// Minimal Rotation
// https://cses.fi/problemset/task/1110/





// In Page-7, Slide-2
//  To get cyclic shift of string-s, We can take Sliding-Window of 
//  Size = n, of string - s+s = 2*s. (As, Size of String-s = n.)
//  i.e. Here, abacabac = string 2*s. 
//       So, string s = abac

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

    // I/P
    string s; cin >> s;

    // Solution
    int n = s.length();

    vector<int> position;
    for(int i=0; i<n; i++){
        position.push_back(i);
    }

    const int mxPow = 2*n; // For string, s = s+s.
    auto p = *min_element(position.begin(), position.end(), [&](const int p1, const int p2){
        int low = 0, high = n+1, index = n;
        while(low <= high){ // O(log(n)).
        // Compare Two strings.
            int mid = (low + high)/ 2;
            if(hash(p1, mid, mxPow) == hash(p2, mid, mxPow)){ // Checking 'hash' upto 'mid'.
                low = mid+1;
            }
            else{
                index = mid;
                high = mid-1;
            }
        }

        // return index < n && a[p1+index] < a[p2+index]; 
        // string a = string s;
        return index < n && s[p1+index] < s[p2+index]; 
    });

    // O/P
    // cout << a.substr(p, n).c_str() << endl;
    cout << s.substr(p, n).c_str() << endl;
    // TC = O(n * log(n)).
}