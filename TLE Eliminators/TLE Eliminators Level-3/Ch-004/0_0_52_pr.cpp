// Correct.
// (This is Mentor's code.)

// F. Ira and Flamenco
// https://codeforces.com/problemset/problem/1833/F



































// (It uses Modular-Arithmetic, Combinatorics of Future Chapters.)
// Hint: (Magnificent dance => Sequence of m-integers.)





#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long 

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

// Combinatorics
int mul(int x, int y){
    return (x * 1LL * y) % MOD;
}
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
int divide(int x, int y){
    return mul(x, power(y, (MOD-2)));
}

signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ios::sync_with_stdio(false); cin.tie(NULL);

    int tc; cin >> tc;

    while (tc--){
        // I/P
        int n, m; cin >> n >> m;
        vector<int> a(n);
        set<int> s;
        unordered_map<int,int> freq;
        for(int i=0; i < n; i++){
            cin >> a[i];
            s.insert(a[i]);
            freq[a[i]]++;
        }

        // Solution


        vector<int> distinct(s.begin(), s.end()); // Set => Vector.
        int j = 0, Product_freq = 1, ans = 0;
        for(int i=0; i < distinct.size(); i++){
            while((j < distinct.size()) && ((distinct[j] - distinct[i]) < m)){
                Product_freq = (Product_freq * 1LL * freq[distinct[j]]) % MOD;
                j++;
            }
            if((j - i) == m){
                ans = (ans + Product_freq) % MOD;
            }
            Product_freq = divide(Product_freq, freq[distinct[i]]);
        }

        // O/P
        cout << ans << endl;
        // TC = O(n).
    }
}