// 

// D. Good Substrings
// https://codeforces.com/contest/271/problem/D



#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// This is Github, "String-Hashing" template.
const int N = 1e6 + 9;

int power(long long n, long long k, const int mod) {
  int ans = 1 % mod;
  n %= mod;
  if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

const int MOD1 = 127657753, MOD2 = 987654319;
const int p1 = 137, p2 = 277;
int ip1, ip2;
pair<int, int> pw[N], ipw[N];

void prec() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % MOD1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % MOD2;
  }

  ip1 = power(p1, MOD1 - 2, MOD1);
  ip2 = power(p2, MOD2 - 2, MOD2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % MOD1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % MOD2;
  }

}
struct Hashing {
  int n;
  string s; // 0 - indexed
  vector<pair<int, int>> hs; // 1 - indexed

  Hashing() {}
  Hashing(string _s) {
    n = _s.size();
    s = _s;
    hs.emplace_back(0, 0);
    for (int i = 0; i < n; i++) {
      pair<int, int> p;
      p.first = (hs[i].first + 1LL * pw[i].first * s[i] % MOD1) % MOD1;
      p.second = (hs[i].second + 1LL * pw[i].second * s[i] % MOD2) % MOD2;
      hs.push_back(p);
    }
  }

  pair<int, int> get_hash(int l, int r) { // 1 - indexed
    assert(1 <= l && l <= r && r <= n);
    pair<int, int> ans;
    ans.first = (hs[r].first - hs[l - 1].first + MOD1) * 1LL * ipw[l - 1].first % MOD1;
    ans.second = (hs[r].second - hs[l - 1].second + MOD2) * 1LL * ipw[l - 1].second % MOD2;
    return ans;
  }

  pair<int, int> get_hash() {
    return get_hash(1, n);
  }
};
// Github, "String-Hashing" template end.

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    prec();
    // I/P
    string s, t; cin >> s >> t;
    int k; cin >> k;

    // Solution
    struct Hashing h1 = Hashing(s);
    int n = s.length();
    int pref_S[n+1] = {0};
    for(int i=1; i <= n; i++){
        int index = (s[i-1]-'a');
        if(t[index] == '0'){
            pref_S[i] = pref_S[i-1] + 1;
        }
        else{
            pref_S[i] = pref_S[i-1];
        }
    }
    int i=1, j=1;
    set<pair<int,int>> Hashes;
    while((i <= j) && (j <= n)){
        int val = (pref_S[j] - pref_S[i-1]);
        if(val <= k){
            int max_Size = (j-i+1);
            int size = 1;
            while(size <= max_Size){
                for(int left = i; left <= j-size+1; left++){
                    int right = (size + left -1);
                    pair<int,int> A = h1.get_hash(left, right);
                    Hashes.insert(A);
                }
                size++;
            }

            i++;
        }
        else if(j == n){
            int max_Size = (j-i+1);
            int size = 1;
            while(size <= max_Size){
                for(int left = i; left <= j-size+1; left++){
                    int right = (size + left -1);
                    pair<int,int> A = h1.get_hash(left, right);
                    Hashes.insert(A);
                }
                size++;
            }

            i++;
        }
        else{

        }
        j++;
    }
    cout << i<< j << endl;
    
    // O/P
    int ans = Hashes.size();
    cout << ans << endl;
}