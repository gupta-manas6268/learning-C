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
    string s; cin >> s;

    // Solution
    int n = s.length();
    s += s;
    struct Hashing h1 = Hashing(s);
    string ans = s;
    pair<int,int> A = h1.get_hash(1, n);
    int l_1 = 1, r_1 = n;
    for(int l_2=2; l_2 <= n; l_2++){
        int r_2 = n+l_2-1;
        pair<int,int> B = h1.get_hash(l_2, r_2);

        if((A.first != B.first) || (A.second != B.second)){
            int left = 1, right = n;
            while(left <= right){
                int mid = (left + right)/ 2;

                int right_1 = (mid + l_1 - 1);
                int right_2 = (mid + l_2 - 1);

                pair<int,int> A_2 = h1.get_hash(l_1, right_1);
                pair<int,int> B_2 = h1.get_hash(l_2, right_2);

                // Binary-Search
                if((A_2.first == B_2.first) && (A_2.second == B_2.second)){
                  right = (right + mid)/2;
                }
                else{
                  
                }
            }
        }
    }

    // O/P
    cout << ans << endl;
}